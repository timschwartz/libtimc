#ifndef _SYS_SELECT_H
#define _SYS_SELECT_H

#include <stddef.h>

typedef struct _fd_set
{
    int not_implemented;
} fd_set;

void FD_CLR(int fd, fd_set *fdset);
int FD_ISSET(int fd, fd_set *fdset);
void FD_SET(int fd, fd_set *fdset);
void FD_ZERO(fd_set *fdset);
int select(int nfds, fd_set *restrict readfds,
       fd_set *restrict writefds, fd_set *restrict errorfds,
       struct timeval *restrict timeout);

#endif
