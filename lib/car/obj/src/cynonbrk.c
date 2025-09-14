# define CAR_H
# include "./../../../incl/config.h"

signed char *(__cdecl cynonbrk(signed char(*argp))) {
auto signed r;
r = cntnonbrk(argp);
if(!r) return(0x00);
return(cynonbrk_r(argp,(signed char*)(alloc(++r*(sizeof(char))))));
}
