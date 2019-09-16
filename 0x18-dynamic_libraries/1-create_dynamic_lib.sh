#!/bin/bash
gcc -fPIC -c ./*.c && gcc -shared -L. -o liball.so ./*.o
