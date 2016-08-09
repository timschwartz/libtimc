#ifndef _SIGNAL_H
#define _SIGNAL_H

#include <stddef.h>

#define SIGINT 1

#define	SIG_BLOCK	1
#define	SIG_UNBLOCK	2
#define	SIG_SETMASK	3

typedef struct _sigset_t
{
    int not_implemented;
} sigset_t;

int sigaddset(sigset_t *, int);
int sigemptyset(sigset_t *set);
int sigprocmask(int how, const sigset_t *set, sigset_t *oset);
int pthread_sigmask(int how, const sigset_t *set, sigset_t *oset);


#endif
