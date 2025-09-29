## Overview
This sample demonstrates how the PythonOp SPL operator is used to incorporate Python-based application logic into an SPL application. PythonOp is used in an SPL application like any other operator, but it processes each tuple using Python code, which may range from a simple script to a full program.

In this example, PythonOp applies a scikit-learn Linear Support Vector Classification (LSVC) model to incoming SMS messages, classifying them as either spam or ham (non-spam). The model was trained on the UCI SMS Spam dataset, and some sample data from that dataset serves as the input stream for this SPL sample.

For more information about how to compile, execute and view the output of a sample application, see the [Build, Run, View Guide](../BuildRunView.md)

## Code
Application code is located in:
* sample/PythonOpScoring.spl
* impl/bin/lsvc-scorer.py

## Model Files
The files below were trained in an RHEL 9 environment.  There may be incompatibilites on other OS versions.  A future update will include a training script, allowing you to create these files on other OS versions.
* models/spam_model.pkl
* models/vectorizer.pkl

## Output

### Output file
`/tmp/ScoringResults.txt`

### stdout 
More detailed scoring results are written to stdout
