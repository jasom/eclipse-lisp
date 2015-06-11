#include <stdlib.h>
#include <eclipse.h>
void *GC_malloc_atomic(size_t size) {return malloc(size);}
void *GC_malloc(size_t size) {return calloc(size,1);}
size_t GC_get_bytes_since_gc(void) {return 0;}
int GC_expand_hp(size_t size) {return 1;}
void GC_gcollect(void) {return;}
int GC_get_heap_size(void) { return 0x10000000; }
void GC_enable_incremental(void) {return;}
