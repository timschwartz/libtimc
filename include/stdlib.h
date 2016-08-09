#ifndef _STDLIB_H
#define _STDLIB_H

#ifndef EOF
#define EOF -1
#endif

#ifndef MB_CUR_MAX
#define MB_CUR_MAX 1
#endif

#ifndef NULL
#define NULL ((void*)0)
#endif

void free(void *ptr);

char *strcpy(char *dest, const char *src);

#endif
