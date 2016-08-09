#ifndef _SETJMP_H
#define _SETJMP_H

typedef struct _sigjmp_buf
{
    int not_implemented;
} sigjmp_buf;

int sigsetjmp(sigjmp_buf env, int savemask);

#endif
