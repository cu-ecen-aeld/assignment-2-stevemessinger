#!/bin/sh
writefile=$1 
writestr=$2 

# Check if all of the arguements were specified
if [ $# != 2 ]; then
    echo "You did not specify all of the arguements!"
    exit 1
fi

mkdir -p "$(dirname "$writefile")" && touch "$writefile"

echo $writestr >> $writefile 