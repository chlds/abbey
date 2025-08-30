# define CAR_H
# include "./../../../incl/config.h"

signed char **(__cdecl catt_v(signed char(*argp))) {
auto signed char **b;
auto signed r;
AND(r,0x00);
OR(r,0x02);
b = (0x00);
r = (r*(sizeof(*b)));
b = (signed char**)(alloc(r));
if(!b) return(b);
*b = (0x00);
return(catt_v_r(argp,b));
}
