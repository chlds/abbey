# define CAR_H
# include "./incl/config.h"

signed(__cdecl cnv_mib_xe(signed char(*argp))) {
auto signed char *b;
auto signed r;
auto signed e = (2);
auto signed k = (1024);
auto signed char a[] = ("MiB");
AND(r,0x00);
if(!argp) return(r);
if(!(*argp)) return(r);
b = reord(a);
if(!b) return(r);
r = cmpe_part(b,argp);
bury(b);
rl(b);
b = (0x00);
if(r) return(0x00);
return(r_pow(k,e));
}
