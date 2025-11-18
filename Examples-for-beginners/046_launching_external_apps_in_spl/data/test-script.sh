#!/bin/sh
# This script must receive one argument which will point to the 
# directory where the result files will be written.
$STREAMS_INSTALL/bin/streamtool lsinstance > $1/046-1.txt
$STREAMS_INSTALL/bin/streamtool version > $1/046-2.txt
uptime > $1/046-3.txt
