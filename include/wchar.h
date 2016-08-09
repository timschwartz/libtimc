#ifndef _WCHAR_H
#define _WCHAR_H

typedef struct _mbstate_t
{
    int not_implemented;
} mbstate_t;

#ifndef wchar_t
typedef int32_t wchar_t;
#endif

typedef int32_t wint_t;

size_t mbrtowc(wchar_t *restrict pwc, const char *restrict s,
       size_t n, mbstate_t *restrict ps);

#endif
