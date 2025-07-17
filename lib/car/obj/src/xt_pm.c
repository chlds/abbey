/* Synopsis

Permission
*/


# define CAR_H
# define FCNTL_H
# define SYS_TYPES_H
# define SYS_STAT_H
# include "./../../../incl/config.h"

signed(__cdecl xt_pm(signed char(*argp))) {
auto signed r;
auto signed char *(a[]) = {
"rwxu",
"rusr",
"wusr",
"xusr",
"rwxg",
"rgrp",
"wgrp",
"xgrp",
"rwxo",
"roth",
"woth",
"xoth",
0x00,
};
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
r = cnt_b(a);
if(!r) return(r);
return(ordy_xe(argp,a,cath_m(r,S_IRWXU,S_IRUSR,S_IWUSR,S_IXUSR,S_IRWXG,S_IRGRP,S_IWGRP,S_IXGRP,S_IRWXO,S_IROTH,S_IWOTH,S_IXOTH)));
}
