## Overview
This example shows how a FileSource operator can be used to read CSV formatted records from a file and then receive those tuples in a FileSink to be written to another file in /tmp.

For more information about how to compile, execute and view the output of a sample application, see the [Build, Run, View Guide](../../BuildRunView.md)

## Code
Application code is located in:
* sample/source_sink_at_work.spl

## Output

### Output file
`/tmp/source_sink_MyResults.txt`

### stdout
Results alo written to stdout (example below)

```
{name="John Tesh",title="Software Engineer",department="DB2 Development",salary=93000.5}
{name="Mary Mason",title="Accountant",department="Finance",salary=105000.26}
{name="Chris Coda",title="Hardware Engineer",department="PPC Design",salary=115292.94}
{name="Gretta Jeno",title="Group Manager",department="Legal",salary=109318.51}

```
