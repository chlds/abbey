# define CAR_H
# include "./../../../incl/config.h"

signed *(__cdecl catt_u(signed(arg))) {
auto signed *b;
auto signed r;
AND(r,0x00);
OR(r,0x02);
b = (0x00);
r = (r*(sizeof(*b)));
b = (signed*)(alloc(r));
if(!b) return(b);
*b = (0x00);
return(catt_u_r(arg,b));
}
