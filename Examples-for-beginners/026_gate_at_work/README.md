## Overview
This is an example that uses the Gate operator from the standard toolkit. This operator delays the incoming tuples until a downstream operator signals with an acknowledgment to receive any further tuples. This is a great way to have a feedback through which we can control the rate at which tuples are passed through. (Please refer to another example named 905_gate_load_balancer that shows the effectiveness of the Gate operator in combination with the ThreadedSplit operator to provide load balancing of the incoming tuples.

For more information about how to compile, execute and view the output of a sample application, see the [Build, Run, View Guide](../../BuildRunView.md)

## Code
Application code is located in:
* my.sample/Main.spl

## Output

### stdout
Results written to stdout
