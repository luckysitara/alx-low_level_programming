#!/bin/bash
#create object files with
gcc -fPIC -c *.c
#create dynamic files with all .o files using
gcc *.o -shared -o liball.so
