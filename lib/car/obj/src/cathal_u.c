# define CAR_H
# include "./../../../incl/config.h"

signed *(__cdecl cathal_u(signed(arg))) {
auto signed r;
AND(r,0x00);
OR(r,0x01);
return(cathal_u_r(arg,(signed*)(alloc(++r*(sizeof(arg))))));
}
