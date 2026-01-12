import os
import numpy as np
import onnxruntime as ort
import streams

class Operator(streams.Operator):
    def __init__(self, ctx, params):
        super().__init__(ctx)

        # Build the path to the model
        self.modelsdir = params.get("modelsdir")
        if self.modelsdir is None:
            raise ValueError("modelsdir parameter is required")
        model_path = os.path.join(self.modelsdir, "spam_pipeline.onnx")

        # load the ONNX model
        self.sess = ort.InferenceSession(model_path, providers=["CPUExecutionProvider"])

        # Inputs/outputs - assume: [labels, scores]
        self.input_name = self.sess.get_inputs()[0].name
        outputs = self.sess.get_outputs()
        self.label_output_name = outputs[0].name
        self.score_output_name = outputs[1].name 
    
    def __del__(self):
        pass

    def allPortsReady(self):
        pass

    def processTuple(self, stream_tuple, port):
        # Get text from SMS message
        txt = stream_tuple["message"].rstrip('\n')

        # ONNXRuntime expects a numpy array, dtype=object for string input
        arr = np.array([txt], dtype=object)
        feed = {self.input_name: arr}

        # Get label and score
        label_arr, score_arr = self.sess.run(
            [self.label_output_name, self.score_output_name],
            feed
        )

        # Extract prediction
        label = int(np.array(label_arr).ravel()[0])
        scores = np.array(score_arr).ravel()

        predstring = "ham" if label == 0 else "spam"

        # Write scoring details to stdout
        print(txt)
        print(f"Class: {label} ({predstring})")
        print(f"Score: {scores}\n")

        # Submit output tuple
        self.submitTuple({
            "pred": predstring, 
            "message_out": stream_tuple["message"]
        })
 
    def processPunctuation(self, punctuation, port):
        self.submitPunctuation(punctuation, port)

