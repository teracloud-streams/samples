## Overview
This example shows how two or more incoming streams with a common schema can be merged to
flow in a sequence one after the other. This merger will be done by using a common tuple attribute in those multiple streams as a key. We will use a C++ primitive operator called OrderedMerger that is included in this project.

In order for the OrderedMerger to work correctly, it is assumed that the two or more input
streams for this primitive operator should already be in sorted order based on the key used to merge and sequence them together. (In the three input files, we deliberately have missing data.  10 to 19 missing in the first file, 20 to 29 missing in the second file, and 30 to 39 missing in the 3rd file. You can see the correct ordered merger behavior in the
final output from this application.)

This OrderedMerger C++ primitive operator uses the PriorityQueue mechanism for its inner workings. A file named impl/include/PriorityQueue.h contains the implementation for PriorityQueue. 

For more information about how to compile, execute and view the output of a sample application, see the [Build, Run, View Guide](../../BuildRunView.md)

## Code
Application code is located in:
* real.time.merger/real_time_streams_merger.spl

C++ operator code generation templates are located in:
real.time.merger/OrderedMerger/OrderedMerger_h.cgt
real.time.merger/OrderedMerger/OrderedMerger_cpp.cgt

C++ operator model:
* real.time.merger/OrderedMerger/OrderedMerger.xml

## Output

### Output file
`/tmp/results_041.txt`
