# define CAR_H
# include "./../../../incl/config.h"

signed *(__cdecl lithi(signed(arg))) {
auto signed r;
AND(r,0x00);
if(arg) OR(r,0x01);
return(lithi_r(arg,alloc(++r*(sizeof(signed)))));
}
