## Overview
This example shows how to use the SPL feature to apply a filter for what gets exported and what gets imported. This powerful feature lets the downstream import operators specify what kind of tuples they want to receive by specifying conditional expressions involving tuple attributes. That lets the Streams runtime apply content-based filtering at the point of export. Those who need such a feature to control what information should be sent downstream based on the tuple contents can make use of this flexible feature. This can be done on the fly without stopping and restarting the application.

The export_with_filter main composite exports a stream with filter option true. In order to test this, always launch the export_with_filter first in distributed mode. After that, launch the import_with_filter in distributed mode.

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
* importing.exporting.filter/export_with_filter.spl
* importing.exporting.filter/import_with_filter.spl

## Output

### stdout
The importing job writes results to stdout
