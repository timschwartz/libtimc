#include <string.h>

char *strncpy(char *restrict s1, const char *restrict s2, size_t n)
{
    size_t counter = 0;
    uint8_t source_end = 0;
    while(counter < n)
    {
        if(source_end) s1[counter] = 0;
        else s1[counter] = s2[counter];

        counter++;
        if(s2[counter] == '\0') source_end = 1;
    }
    return s1;
}
