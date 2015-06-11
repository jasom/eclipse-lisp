void *GC_malloc_atomic(size_t size);
void *GC_malloc(size_t size);
size_t GC_get_bytes_since_gc(void);
int GC_expand_hp(size_t size);
void GC_gcollect(void);
int GC_get_heap_size(void);
void GC_enable_incremental(void);
