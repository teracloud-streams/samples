## Overview
This example shows how to launch/execute an external application within the Streams SPL code. In this case, we defined a simple C++ native function in which we have the required C++ code to launch an external application. That C++ code uses pipes to execute a given application. This function would be useful to launch any custom script within the Streams application logic when certain application specific conditions arise.

**The easiest way to build this sample is execute a `make` in the top-level sample directory.  It will build both the C++ code and the SPL code.**

For more information about how to compile, execute and view the output of a sample application, see the [Build, Run, View Guide](../../BuildRunView.md)

## Code
SPL application code is located in:
* launch.external.apps/launching_external_apps.spl

C++ source code is located in:
* impl/include/Functions.h

Function model is located in:
* launch.external.apps/native.function/function.xml

The launched script is in:
* data/test-script-sh

## Output

### Output files
`/tmp/046-1.txt`
`/tmp/046-2.txt`
`/tmp/046-3.txt`

### stdout
Additional messages are written to stdout
