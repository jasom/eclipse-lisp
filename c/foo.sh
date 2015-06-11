#!/bin/bash
export pflags="-std=gnu89 -I. -Demscripten -DMAXNAMLEN=512 -DUSE_POSIX_OPENDIR -DEXPANDABLE_CONTROL_STACK -DclNOGC -O0 -g3 -Wno-unused-value -Wno-dangling-else -fno-strict-aliasing -s TOTAL_MEMORY=$((128*1024*1024)) -s SAFE_HEAP=0 -s ALIASING_FUNCTION_POINTERS=0 -s ASSERTIONS=2 -s FUNCTION_POINTER_ALIGNMENT=8"
rm -f ./*.o
make -j8 -f emcc.mak eclipse.html
