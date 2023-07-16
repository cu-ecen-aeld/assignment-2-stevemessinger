#!/bin/sh
filesdir=$1 
searchstr=$2 

# Check if all of the arguements were specified
if [ $# != 2 ]; then
    echo "You did not specify all of the arguements!"
    exit 1
fi

### Check if a directory does not exist ###
if [ ! -d $filesdir ]; then
    echo "Directory at location filesdir DOES NOT exists." 
    exit 1
fi

# Check number of files in directory and subdirectory 

# Print out final message
numfile=$(find $filesdir -type f | wc -l)

numstr=$(grep -c $searchstr $filesdir/* | wc -l)

echo "The number of files are ${numfile} and the number of matching lines are ${numstr}"

