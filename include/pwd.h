#ifndef _PWD_H
#define _PWD_H

typedef uint64_t gid_t;
typedef uint64_t uid_t;

struct passwd
{
    char    *pw_name;   // User's login name. 
    uid_t    pw_uid;   // Numerical user ID. 
    gid_t    pw_gid;    // Numerical group ID. 
    char    *pw_dir;    // Initial working directory. 
    char    *pw_shell; // Program to use as shell. 
};

#endif
