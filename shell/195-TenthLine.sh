#!/bin/sh

FILE=file.txt
LINE=`wc -l $FILE | xargs | cut -d' ' -f1`
if [ $LINE -ge 10 ]; then
    head -n10 file.txt | tail -n1
else
    echo
fi

