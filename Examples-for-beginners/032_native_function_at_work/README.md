## Overview
This application shows how native functions written in C++ can be called within an SPL application. 
There are two ways in which native functions can be written in C++.
1) All the code for the C++ functions can be implemented (inline) in a C++ header file.
2) The C++ functions can be declared in a C++ header file and implemented in a separate .cpp file. The code is built into a shared library (.so) file.

This application demonstrates incorporating native functions in both of these ways.

**The easiest way to build this sample is execute a `make` in the top-level sample directory.  It will build both the C++ code and the SPL code.**

There are two native function models used in this application. These specify the C++ header file containing the function declarations, C++ namespaces, and the SPL-format signatures of the native functions. They also allow for the declaration of library dependencies. Browse those two XML files to see how they are defined.

1) function.xml (in the functions.inside.header_file namespace).
2) function.xml (in the functions.inside.shared_lib namespace).

In the case of function model (1), you will find the C++ native functions implemented in a C++ header (Functions.h) file that is present in the impl/include directory.

In the case of function model (2), the native functions are provided through a .so shared library that is built from directory [NativeFunctionLib]. The sample's Makefile will built everything that you need, but you can see how to build the shared library individually by examining its mk script. After compilation, the script copies the C++ header file and the .so file to the SPL project's impl/include and impl/lib directories respectively. That way, the SPL application will be self-contained with the C++ interface file and the .so file inside of it.

For more information about how to compile, execute and view the output of a sample application, see the [Build, Run, View Guide](../../BuildRunView.md)

## Code
**Notice that this sample's main directory: 032_native_function_at_work has a subdirectory by the same name.  After the make, this subdirectory contains the SPL application along with the C++ artifacts it needs to run.**
 
SPL Application code is located in:
* 032_native_function_at_work/my.sample/Main.spl

C++ source code is located in:
* 032_native_function_at_work/impl/include/Functions.h
* NativeFunctionLib/LibFunctions.cpp
* NativeFunctionLib/LibFunctions.h

Function Models:
* 032_native_function_at_work/functions.inside.header_file/native.function/function.xml
* 032_native_function_at_work/functions.inside.shared_lib/native.function/function.xml

## Output

### stdout
Results written to stdout
