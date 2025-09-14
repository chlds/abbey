# define CAR_H
# include "./../../../incl/config.h"

signed char *(__cdecl cylxiv(signed char(*argp))) {
auto signed r;
r = cntlxiv(argp);
if(!r) return(0x00);
return(cylxiv_r(argp,(signed char*)(alloc(++r*(sizeof(char))))));
}
