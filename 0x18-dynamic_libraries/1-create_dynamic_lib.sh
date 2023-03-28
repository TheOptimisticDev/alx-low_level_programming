#!/bin/bash
gcc -Wall *.c -c -fPIC
gcc *.o -shared -o liball.so
