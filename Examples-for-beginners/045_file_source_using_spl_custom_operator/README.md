## Overview
This example shows how to create source operators using the Custom operator available in the SPL standard toolkit. It is possible to create source operators without writing primitive source operators in another language. Simple source operators can be written using the built-in SPL Custom operator. This will come handy for those who don't want to do an extra layer of C++, Java or Python code for satisfying simple needs for a source operator. You will see a function of a file source operator being implemented all using SPL code in this example.

This example requires the user to pass a command line argument to this application.  Set the following argument when you launch the application to specify the file to read from:

`my.file.source::file_source_using_spl_custom_operator.SourceFileName`

If you launch this application from VS Code or the Streams Console, you can enter the submission time values in the application launch dialog.

In this particular example, you can use the following file which is already available in this application's data directory:

`stock_report.dat`

If you want to use your own file, place it in the same data directory as stock_report.dat

For more information about how to compile, execute and view the output of a sample application, see the [Build, Run, View Guide](../../BuildRunView.md)

## Code
Application code is located in:
* my.file.source/file_source_using_spl_custom_operator.spl

## Output

### Output file
`/tmp/stock_report_output.txt`

