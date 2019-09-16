#!/bin/bash
wget -O /tmp/libmine.so https://www.github.com/maybe-william/holbertonschool-low_level_programming/blob/master/0x18-dynamic_libraries/libmine.so?raw=true/
export LD_PRELOAD=/tmp/libmine.so
