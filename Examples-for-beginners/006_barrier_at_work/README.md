## Overview
This example shows how to synchronize the incoming tuples using a Barrier operator. It uses a bank deposit/debit scenario to split the deposit/debit requests, perform that account activity, and then combine the post-activity results with the incoming requests. Barrier operator provides what is needed to accomplish that.

For more information about how to compile, execute and view the output of a sample application, see the [Build, Run, View Guide](../../BuildRunView.md)

## Code
Application code is located in:
* sample/barrier_at_work.spl

## Output

### Output files
`/tmp/006_barrier_bank_tasks_deposit.result`
`/tmp/006_barrier_bank_tasks_debit.result`

### stdout
Results also written to stdout
