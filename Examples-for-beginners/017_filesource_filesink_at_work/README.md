## Overview
We have used the FileSource and the FileSink operators in other examples before. However, this example shows off the following intriguing features that will become handy.

a) Automatic deletion of a file after the FileSource reads all the records.
b) Flushing the sink file on demand after writing a certain number of tuples.
c) Ability of the FileSource to move the file once it is done with it.
d) Creating a fresh and new output sink file after writing certain number of tuples.
e) Ability of the FileSource to keep reading from a hot file as new CSV records get written.

**Please Note:** There are some file manipulation steps you need to perform to fully run this sample. Please refer to the comments in the source code for instructions.

For more information about how to compile, execute and view the output of a sample application, see the [Build, Run, View Guide](../../BuildRunView.md)

## Code
Application code is located in:
* my.sample/Main.spl

## Output

### Output file(s)
Multiple output files are written, and there is some dynamic behavior demonstrated.  Please refer to the comments in the source code to understand the expected output.

