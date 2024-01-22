#!/bin/bash
gcc -shared -fPIC -o libmylib.so 
export LD_PRELOAD=/path/to/libmylib.so
