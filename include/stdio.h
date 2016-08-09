#ifndef _STDIO_H
#define _STDIO_H

#include <stdint.h>
#include <wchar.h>

typedef struct _FILE
{
    int not_implemented;
} FILE;

extern struct _FILE *stdin;
extern struct _FILE *stdout;

int fflush(FILE *stream);
int fileno(FILE *stream);
int fprintf(FILE *stream, const char *format, ...);
size_t wcrtomb(char *s, wchar_t wc, mbstate_t *ps);

#endif
