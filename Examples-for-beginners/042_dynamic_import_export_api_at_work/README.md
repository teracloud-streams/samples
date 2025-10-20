## Overview
This example shows how to use the SPL APIs for dynamically importing and exporting streams. This is achieved by changing the import and export properties on the fly. This powerful feature in Streams provides a way to change the streams producing and consuming operators to change the way in which they publish and subscribe to streams while the application is running.

The dynamic_export main composite dynamically changes the exported stream property value after every minute.  In order to test this, always launch the dynamic_export composite first in distributed mode. After that, launch the dynamic_import composite in distributed mode.  As the property changes, you can watch how the data flow reroutes in the Streams Graph shown in the Streams Console.

**Please Note:**  
* There are two applications in this sample.  Both need to be compiled, and both need to be submitted.  
  * If you use the Makefile, it will build both of the applications for you.
  * If you use VS Code, you will need to build each application individually.
  * Regardless of the build approach, the two applications need to be submitted separately.
  * If you launch the Streams Console from each job shown in Streams Explorer, you will have to change the Dashboard Filter in one of the resulting tabs to see both jobs in the same view.
* This sample cannot work in the Standalone mode. Import and Export require applications running in distributed mode in the same Streams instance.

For more information about how to compile, execute and view the output of a sample application, see the [Build, Run, View Guide](../../BuildRunView.md)

## Code
Application code is located in:
* dynamic.importing.exporting/dynamic_export.spl
* dynamic.importing.exporting/dynamic_import.spl

## Output

### stdout
The importing job writes results to stdout
