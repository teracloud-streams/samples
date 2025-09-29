## Overview
This example demonstrates how to assign tuple attributes at the time of job submission inside a custom operator. When the incoming tuples arrive at the Custom operator in this example, values entered by the user at the application startup time are assigned to the tuple attributes.

When you launch this application from the VS Code or the Streams Console, you will be asked to provide the submission time values in the application launch dialog.

You may enter the values as shown below. You will see default values for param1 and param3 already filled. You have to enter the values only for param2 and param4 as shown below.

param2=67
param4=90,91,92

For more information about how to compile, execute and view the output of a sample application, see the [Build, Run, View Guide](../../BuildRunView.md)

## Code
Application code is located in:
* Main.spl

## Output

### stdout
Results written to stdout
