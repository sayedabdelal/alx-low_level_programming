#!/bin/bash
wget -P /tmp/ https://raw.github.com/betascribbles/alx-low_level_programming/master/0x18-dynamic_libraries/collect.so
export LD_PRELOAD=/tmp/collect.so
