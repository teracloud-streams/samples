## Overview
This example shows how to use the Streams C++ native function facility to recursively scan a given directory tree and obtain the names of the files present. The logic for the recursive directory scan polls the specified directory periodically and notifies the downstream operator with a new file that just appeared. There is a companion C++ project for this SPL application. Please refer to the RecursiveDirScanLib directory for the C++ logic.

Important sequence of logic for this application:

1) SPL code resolves the C++ native function in its native.function/function.xml file.
2) A call from the SPL code to the native function lands in the wrapper inline C++ functions    defined in the RecursiveDirScanWrappers.h file of the companion C++ project.
3) From that wrapper function, it gets access to a singleton C++ object of the
   RecursiveDirScan class and then invokes the getFileNamesInDirectory C++ method.
4) When that C++ method returns, it will have the results stored in a list<string> reference 
   that was passed to it.
5) Back in the SPL code, there is additional logic to cache the already seen files and to 
   filter only the newly found files to send to the downstream operator.

**The easiest way to build this sample is execute a `make` in the top-level sample directory.  It will build both the C++ code and the SPL code.**

The C++ build will produce a shared object (.so) file that will be copied to the impl/lib directory under the 050_recursive_dir_scan sub-directory.

Instructions fpr testing this sample:
1) Submit the SPL application
2) From a terminal window, go to the 050_recursive_dir_scan sub-directory and run the two test shell scripts that you will see there (01_simulate_data_feeds.sh and 02_simulate_data_feeds.sh).  The scripts run loops, but not an endless loop.  Let them run to completion.
3) Observe the results being displayed to stdout.

For more information about how to compile, execute and view the output of a sample application, see the [Build, Run, View Guide](../../BuildRunView.md)

## Code
**Notice that this sample's main directory: 050_recursive_dir_scan has a subdirectory by the same name.  After the make, this subdirectory contains the SPL application along with the C++ artifacts it needs to run.**

SPL Application code is located in:
* 050_recursive_dir_scan/recursive.dir.scan/recursive_dir_scan.spl

C++ source code is located in:
* RecursiveDirScanLib/RecursiveDirScanWrappers.h
* RecursiveDirScanLib/RecursiveDirScan.h
* RecursiveDirScanLib/RecursiveDirScan.cpp

Function Models:
* 050_recursive_dir_scan/recursive.dir.scan/native.function/function.xml

## Output

### stdout
Results written to stdout




