#!/bin/bash
wget -q -O /tmp/win.so "https://github.com/Mokowz/alx-low_level_programming/blob/master/0x18-dynamic_libraries/win.so"
export LD_PRELOAD=/tmp/win.so

