#!/bin/bash
wget -p /tmp/ https://github.com/mxg-mega/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libmakewin.so
export LD_PRELOAD=/tmp/libmakewin.so
