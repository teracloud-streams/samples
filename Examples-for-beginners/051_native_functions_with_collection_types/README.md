## Overview

This SPL composite includes a simple example to show how to call C++ native functions that are compiled into a .so shared library. In addition, it demonstrates how to pass SPL collection data types (list, map, and tuple) to such C++ native functions.

There are 4 major parts that constitute this application.

1) SPL source code file.
2) A C++ class interface file and a C++ class implementation file.
3) A C++ wrapper include file that provides a direct entry point for
   the SPL code into the C++ native functions defined in the
   C++ files mentioned above in (2).
4) A native function model XML file that tells the SPL compiler
   about the function prototypes of the available C++ functions and
   the location of the .so library housing those C++ functions.

This sample contains both SPL code and C++ code.

**The easiest way to build this sample is execute a `make` in the top-level sample directory.  It will build both the C++ code and the SPL code.**

Extra tip
=========
In the native function model XML file, you will see a reference about
"archLevel" within the Library section. This is a simple shell script that
will get executed at the time of loading the .so library to find out the
correct RHEL version, CPU type (32 bit versus 64 bit) and the system
architecture type (x86 versus PPC). The make script (mk) in the C++
project builds a platform-specific version of the .so library and copies it to
to a corresponding platform specific directory inside the SPL project's
impl/lib directory. Hence, this "archLevel" script is useful to determine
which .so file is needed and this script is already included in the
SPL project's impl/bin directory.

For more information about how to compile, execute and view the output of a sample application, see the [Build, Run, View Guide](../../BuildRunView.md)

## Code
**Notice that this sample's main directory: 051_native_functions_with_collection_typeshas a subdirectory by the same name.  After the make, this subdirectory contains the SPL application along with the C++ artifacts it needs to run.**

SPL application code is located in:
* 051_native_functions_with_collection_types/com.ibm.nf.test/native_functions_with_collection_types.spl

C++ source code is located in:
* NativeFunctionsWithCollectionTypesLib/NativeFunctionsWithCollectionTypesWrappers.h
* NativeFunctionsWithCollectionTypesLib/NativeFunctionsWithCollectionTypes.h
* NativeFunctionsWithCollectionTypesLib/NativeFunctionsWithCollectionTypes.cpp

Function Models:
* 051_native_functions_with_collection_types/com.ibm.nf.test/native.function/function.xml

## Output

### stdout
Results written to stdout
