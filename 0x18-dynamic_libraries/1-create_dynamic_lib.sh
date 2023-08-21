#!/bin/bash
#create object files with
gcc *.c -c -fPIC
#create dynamic files with all .o files using
gcc *.o -shared -o liball.so
chmod 755 libdynamic.so
