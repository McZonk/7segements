#!/bin/bash

NAME="|O6VYNnX~^"

PARAM=$1
if [ -z "$PARAM" ]; then
PARAM=0123456789
fi

gcc -w -o "$NAME" 7segments.c && "./$NAME" $PARAM
