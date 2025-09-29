## Overview
This example shows how a Split operator can be used to split the incoming tuples based on a key. In this example, the split criteria (i.e. which tuples will come out on which port) is pre-configured through a text file. Alternatively, one can compute the index of the output port on the fly inside the Split operator parameter section.

It also gives a gentle introduction to the simple use of the mixed mode programming by combining PERL code inside SPL code.

For more information about how to compile, execute and view the output of a sample application, see the [Build, Run, View Guide](../../BuildRunView.md)

## Code
Application code is located in:
* sample/split_at_work.splmm

## Output

### Output files
`/tmp/007_split_split_ticker_output_stream_1.result`
`/tmp/007_splitsplit_ticker_output_stream_7.result`
`/tmp/007_splitsplit_ticker_output_stream_9.result`

### stdout
Results also written to stdout

