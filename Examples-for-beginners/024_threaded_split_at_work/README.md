## Overview
This example demonstrates an important standard toolkit operator named ThreadedSplit. It is a multi-threaded split that is different from the other content-based Split operator. ThreadedSplit splits the incoming tuples to the available output ports to improve concurrency. This will speed up the distribution of tuples by using the individual threads assigned to each of the output ports.

For more information about how to compile, execute and view the output of a sample application, see the [Build, Run, View Guide](../../BuildRunView.md)

## Code
Application code is located in:
* my.sample/Main.spl

## Output

### Output file
`/tmp/003_sink_myResults.txt`

### stdout
Results written to stdout
