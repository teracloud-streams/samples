## Overview
This example shows a way to create a C++ primitive source operator and then provide a control input port for it. Certain classes of applications can make use of this facility to control the kind of data a source operator generates. In addition, this example shows how to pass one or more string literals to the C++ primitive operator as invocation time parameters. As a bonus, this example also shows a simple way to do performance measurement inside the SPL code using the built-in SPL high precision timestamp functions.

For more information about how to compile, execute and view the output of a sample application, see the [Build, Run, View Guide](../../BuildRunView.md)

## Code
SPL Application code is located in:
* source_op_with_control_port/source_operator_with_control_port.spl

C++ operator code generation templates are located in:
* source_op_with_control_port/MyOp/MyOp_h.cgt
* source_op_with_control_port/MyOp/MyOp_cpp.cgt

C++ operator model:
* source_op_with_control_port/MyOp/MyOp.xml

## Output

### stdout
Results written to stdout
