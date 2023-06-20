#!/bin/bash
curl -o /tmp/nrandom.so https://raw.githubusercontent.com/betascribbles/alx-low_level_programming/master/0x18-dynamic_libraries/nrandom.so
export LD_PRELOAD=/tmp/nrandom.so
