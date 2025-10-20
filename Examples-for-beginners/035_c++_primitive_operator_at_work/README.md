## Overview
This sample shows how to create a C++ primitive operator from scratch.  It also demonstrates that both a Java operator and a C++ primitive operator can be part of a single application.

The application:

1) Invokes an existing Java primitive operator used as the data source of the application.
2) Invokes a new C++ primitive operator located inside this application's toolkit directory.
3) Writes output using the SPL FileSink operator

The new C++ primitive operator included in this sample defines a C++ primitive operator model file that you can explore to learn how the different fields in that file are configured. Then, the code generation template header and implementation files (*_h.cgt and *_cpp.cgt) can be browsed to learn about the primitive operator logic. 

**The easiest way to build this sample is execute a `make` in the top-level sample directory.  It will build both the C++ code and the SPL code.**

For more information about how to compile, execute and view the output of a sample application, see the [Build, Run, View Guide](../../BuildRunView.md)

## Code
SPL Application code is located in:
* my.sample/Main.spl

C++ operator code generation templates are located in:
* directory.lister/DirectoryLister/DirectoryLister_h.cgt
* directory.lister/DirectoryLister/DirectoryLister_cpp.cgt

C++ operator model:
* directory.lister/DirectoryLister/DirectoryLister.xml

## Output

### Output file
`/tmp/results_035`
