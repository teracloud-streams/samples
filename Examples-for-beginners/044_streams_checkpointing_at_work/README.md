## Overview
This example shows a key feature of Streams by which an operator's state variables can be preserved when a PE fails and gets restarted. This is done through a combination of the SPL configuration directives named "checkpointing" and "restartable". Developers can protect their critical operator data by taking advantage of this built-in checkpointing feature. When you run this example, you will see data flows without any gaps or interruption, when a PE is killed manually and then gets restored automatically by the Streams runtime.

The source code comments explain how to kill the PE to see the restarting using the checkpoint.

**Please Note:** 
To run this sample, you need to configure your Streams instance to have a checkpoint repository.  If your instance has already been set up with a checkpoint repository, no action is necessary, and this sample should be able to run successfully using that repository.

However, if your instance doesn't already have a checkpoint repository, you'll need to set one up. There are many different options for the type and location of a checkpoint repository, but for the purposes of this sample, we will create one in the file system.  Run the following commands to set up the repository:
* `mkdir /tmp/checkpoint_store`
* `streamtool setproperty instance.checkpointRepository=fileSystem`
* `streamtool setproperty instance.checkpointRepositoryConfiguration=" { \"Dir\" : \"/tmp/checkpoint_store\" } "`

After setting these properties, you need to stop and restart your instance.

This sample does not support standalone execution.  It must be run in distributed mode.

For more information about how to compile, execute and view the output of a sample application, see the [Build, Run, View Guide](../../BuildRunView.md)

## Code
Application code is located in:
* checkpointing.example/streams_checkpointing_at_work.spl

## Output

### Output file
`/tmp/044_sink_myResults.txt`

### stdout
Results written to stdout
