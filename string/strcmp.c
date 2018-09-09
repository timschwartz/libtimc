#include <string.h>

int strcmp(const char *s1, const char *s2)
{
    size_t counter = 0;
    while(*s1)
    {
        if(*s1 != *s2) break;
        s1++;
        s2++;
    }
    return *(int *)s1 - *(int *)s2;
}
