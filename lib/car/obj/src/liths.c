# define CAR_H
# include "./../../../incl/config.h"

signed short *(__cdecl liths(signed(arg))) {
auto signed r;
AND(r,0x00);
if(arg) OR(r,0x01);
return(liths_r(arg,alloc(++r*(sizeof(signed short)))));
}
