#pragma once
#include <stdint.h>

/** Set all 'n' elements of 's' to value 'c'.
  *
  *   \param s pointer to elements.
  *   \param c value to set elements.
  *   \param n number of elements to write.
  */
void *memset(void *s, int c, size_t n);

/** Return a pointer to the first occurrence of 'c' in 's'.
  *
  *   \param s pointer to string.
  *   \param c character to search for.
  *   \return Pointer to first occurrence.
  */
const char *strchr(const char *s, int c);

int strcmp(const char *s1, const char *s2);
size_t strlen(const char *s);
char *strncpy(char *restrict s1, const char *restrict s2, size_t n);
