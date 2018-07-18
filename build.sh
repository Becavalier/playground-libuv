#!/bin/bash

if [[ "$1" != "" && "$2" != "" ]]; then 
	CMD="g++ -o $2 $1 /usr/local/lib/libuv.a -framework CoreFoundation -framework CoreServices";
	echo $CMD;
	$CMD;
	
	exit 0;
fi