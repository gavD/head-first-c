#!/bin/bash
gcc $1.c -o $1 && ./$1  && rm -f $1
