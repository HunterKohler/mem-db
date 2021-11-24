#ifndef MEMDB_MALLOC_H_
#define MEMDB_MALLOC_H_

#include "common.h"

void *zalloc(size_t size);
void *memdup(void *src, size_t size);

void *xmalloc(size_t size);
void *xzalloc(size_t size);
void *xrealloc(void *ptr, size_t size);
char *xstrdup(char *str);

#endif
