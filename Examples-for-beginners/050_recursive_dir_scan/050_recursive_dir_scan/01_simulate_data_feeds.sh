#!/bin/bash
# ========================
# First created on: May/13/2013
# Last modified on: May/13/2013
#
# Use this script to start simulating the data feeds for
# testing the 050_recursive_dir_scan SPL application.
# Copy new files into our flat watch directory (i.e. with no recursive sub-directories).
# ========================
date
# Let us first delete all the files in the data directory.
rm -f /tmp/data_050/*.start_batch
rm -f /tmp/data_050/*.end_batch
rm -f /tmp/data_050/*.csv

# Create the feed directory we will use in /tmp
mkdir -p /tmp/data_050
   
# Let us stay in a loop and create 10 batches each with 10 transaction files.
# In between each batch, we will induce a delay of 10 seconds.
for (( idx=1; idx<=10; idx++ ))
do
   # Delete any existing transaction data files.
   rm -f /tmp/data_050/*.csv

   # Copy all the transaction files for the current batch.
   for (( cnt=1; cnt<=10; cnt++ ))
   do
      fileIdx=0
      let fileIdx=$idx-1;
      let fileIdx=$fileIdx*10+$cnt
      fileName="Transaction$fileIdx.csv"
      cp $STREAMS_INSTALL/doc/html/rest/api/Notifications.html /tmp/data_050/$fileName
   done
   
   # Copy a start batch signal file now.
   startBatchFileName=$idx.start_batch
   endBatchFileName=$idx.end_batch
   cp ~/.bashrc /tmp/data_050/$startBatchFileName
   cp ~/.bashrc /tmp/data_050/$endBatchFileName
   echo "Copied all the transaction files for batch $idx"
   echo "Waiting for 10 seconds ..."
   sleep 10
done

echo "Finished copying the transaction files for all the batches."
rm -f /tmp/data_050/*.start_batch
rm -f /tmp/data_050/*.end_batch
rm -f /tmp/data_050/*.csv
date
