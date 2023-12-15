#!/bin/bash
wget -O /libhack/win.so https://github.com/Ipinsokansunday/alx-low_level_programming/blob/master/0x18-dynamic_libraries/libhack.so
export LD_PRELOAD=/libhack/win.so
