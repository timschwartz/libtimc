#ifndef STRING_H
#define STRING_H

#include <stdint.h>

void *memset(void *s, int c, size_t n);
char *strchr(const char *s, int c);
int strcmp(const char *s1, const char *s2);
size_t strlen(const char *s);
char *strncpy(char *restrict s1, const char *restrict s2, size_t n);

#endif
