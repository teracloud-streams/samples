## Overview
This example shows the use of multiple composites in a single application. There is a main composite that in turn uses two other composites. This application shows how the additional composites in different namespaces get included into the main composite via the "use" directive. It also demonstrates how the additional composites can accept their own operator parameters. It teaches the basics of an important feature that will come handy when big applications need to be componentized.

In this sample, building the main composite (in Main.spl) pulls the other composites into the build.

For more information about how to compile, execute and view the output of a sample application, see the [Build, Run, View Guide](../../BuildRunView.md)

## Code
Application code is located in:
* my.sample1/Main.spl
* my.sample2/StockMatch.spl
* my.sample3/StockOrderCommission.spl

## Output

### stdout
Results written to stdout
