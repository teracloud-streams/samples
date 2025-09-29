# Guide for Building, Running and Viewing Output of a Sample
A number of different methods and tools can be used to develop and run Teracloud Streams applications.  See the table below for the different options:

|Tool|Compiling|Running standalone|Submitting distributed|View messages|
| --- |:---:|:---:|:---:|:---:|
|Command-line/terminal|✓|✓|✓|✓|
|VS Code|✓|Use terminal|✓|✓|
|Streams Console| | |✓|✓|

This guide breaks down how to work with a sample using these methods and tools.

## Compiling a sample application
**Command-line**

A sample can be built by running `make` within the sample's folder.

**VS Code**

There are 2 options for building a sample:
* In a terminal, run `make` from the sample's folder.
* Right-click each `.spl` file in the sample and select `Build`

## Running a sample application
Familiarize yourself with the differences between running [standalone versus distributed Streams applications](https://doc.streams.teracloud.com/com.ibm.streams.dev.doc/doc/runningrelocatableapplications.html).  Most samples can be run in either mode, unless the specific sample's README points out that standalone is not supported.

**Command-line**

There are 2 options for running a sample from the command-line:
* To run in standalone mode, run the `standalone` executable in the `output/bin` directory of the build
* To run in distributed mode, use `streamtool submitjob` to submit the .sab file from the `output` directory of the build to a running Streams instance

**VS Code**

  * There are multiple methods for running an application in VS Code.  The simplest option for running a sample is detailed below:
    * Navigate to the **Streams Explorer** extension. 
    * Select the `Submit Job` icon next to the instance, and specify the .sab you want to submit in the resulting dialog.
    * (You can select the `Show Job Graph` icon next to the instance to view the running Streams application in the Streams Console)

**Teracloud Streams Console**
  * There are multiple areas in the Streams console where you can initiate a submit job.
  * Once the job is submitted, you can view the running application in the console.


## Viewing messages written to stdout by a sample application:
**Command-line**
* If running in standalone mode, you will see the output messages in your terminal.
* If running in distributed mode, messages will be written to a log file on the host with the PE containing the writing operator.  File location is: `/tmp/Streams-<domain_id>/logs/<host_name>/instances/<streams_instance_name>/jobs/<job_id>/pec.pe.<pe_id>.stdouterror`

**VS Code**
* If running in standalone mode, you will see the output messages in your terminal.
* If running in distributed mode, you can view the output messages in the **Streams Log Watcher** panel 

**Teracloud Streams Console**

Hover over the operator in the application graph that is writing the messages and select the `View Operator Logs` or `View PE Logs` action 

## Viewing output files
Some samples write output files to the file system.  These can be viewed using your mechanism of choice.

