# define CAR_H
# include "./../../../incl/config.h"

signed(__cdecl ecd_u_xxxii(signed char(*argp))) {
auto signed char *b;
auto signed r;
b = cas(argp);
if(!b) return(0x00);
r = ecd_u_xxxii_r(b);
rlse(b);
b = (0x00);
return(r);
}
