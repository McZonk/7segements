#!/bin/bash

PARAM=$1
if [ -z "$PARAM" ]; then
PARAM=0123456789
fi

llvm-gcc -w mini7digit.c
./a.out $PARAM
