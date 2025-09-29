## Overview
This example demonstrates how two different SPL applications can share streams between them. This is an important feature that is elegantly done using the two pseudo operators called Export and Import. This application also shows how two different main composites can be part of the same application by using two different namespaces. As an aside, there is also a demonstration of using a Custom operator to customize the Beacon generated tuples by involving state variables.

**Please Note:**  
* There are two applications in this sample.  Both need to be compiled, and both need to be submitted.  
  * If you use the Makefile, it will build both of the applications for you.
  * If you use VS Code, you will need to build each application individually.
  * Regardless of the build approach, the two applications need to be submitted separately.
* This sample cannot work in the Standalone mode. Import and Export requireapplications running in distributed mode in the same Streams instance.

For more information about how to compile, execute and view the output of a sample application, see the [Build, Run, View Guide](../../BuildRunView.md)

## Code
Application code is located in:
* my.sample/Main.spl
* my.sample2/Main.spl

## Output

### stdout
Results written to stdout
