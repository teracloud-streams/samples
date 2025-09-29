import streams

import pickle
import sys
from sklearn.svm import *
from sklearn.feature_extraction.text import *


class Operator(streams.Operator):
    def __init__(self, ctx, params):
        super().__init__(ctx)

        self.modelsdir = params.get("modelsdir")

        # load models
        with open(self.modelsdir + "spam_model.pkl", "rb") as f:
            self.model = pickle.load(f)
        with open(self.modelsdir + "vectorizer.pkl", "rb") as f:
            self.vectorizer = pickle.load(f)
    
    def __del__(self):
        pass

    def allPortsReady(self):
        pass

    def processTuple(self, stream_tuple, port):
        txt = stream_tuple["message"]
        txt.rstrip('\n')

        test_doc = [txt]

        X_new = self.vectorizer.transform(test_doc)

        prediction = self.model.predict(X_new)
        if prediction[0] == 0:
            predstring = "ham"
        else:
            predstring = "spam"

        # Write scoring details to stdout
        decision = self.model.decision_function(X_new)
        classes = self.model.classes_
        print(txt);
        print("Class: " + str(prediction) + "(" + predstring + ")");
        print("Score: " + str(decision) + "\n");

        # Submit output tuple
        self.submitTuple({"pred": predstring, "message_out": stream_tuple["message"]})
 
    def processPunctuation(self, punctuation, port):
        self.submitPunctuation(punctuation, port)

