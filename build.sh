#!/bin/bash

PARAM=$1
if [ -z "$PARAM" ]; then
PARAM=0123456789
fi

llvm-gcc -w -o 7segments 7segments.c && ./7segments $PARAM
