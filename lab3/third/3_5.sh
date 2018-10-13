#!bin/bash
grep -n $1 $2 | head -n $3 | sort
