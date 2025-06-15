# define CAR_H
# include "./../../../incl/config.h"

signed **(__cdecl cardi(signed(*argp))) {
auto signed **b;
auto signed r;
AND(r,0x00);
OR(r,0x02);
r = (r*(sizeof(argp)));
b = (signed**)(alloc(r));
if(!b) return(b);
*b = (0x00);
return(cardi_r(argp,b));
}
