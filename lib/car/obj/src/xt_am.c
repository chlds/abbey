/* Synopsis

Access mode
*/


# define _GNU_SOURCE
# define CAR_H
# define FCNTL_H
# define SYS_TYPES_H
# define SYS_STAT_H
# include "./../../../incl/config.h"

signed(__cdecl xt_am(signed char(*argp))) {
auto signed r;
auto signed char *(a[]) = {
"creat",
"excl",
"append",
"trunc",
"rdonly",
"wronly",
"rdwr",
"noctty",
"noatime",
"nonblock",
"sync",
"async",
"nofollow",
"path",
"directory",
"cloexec",
"tmpfile",
0x00,
};
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
r = cnt_b(a);
if(!r) return(r);
return(ordy_xe(argp,a,cath_m(r,\
O_CREAT,O_EXCL,O_APPEND,O_TRUNC,\
O_RDONLY,O_WRONLY,O_RDWR,O_NOCTTY,\
O_NOATIME,O_NONBLOCK,O_SYNC,O_ASYNC,\
O_NOFOLLOW,O_PATH,O_DIRECTORY,O_CLOEXEC,\
O_TMPFILE\
)));
}
