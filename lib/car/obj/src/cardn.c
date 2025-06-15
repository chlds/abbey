# define CAR_H
# include "./../../../incl/config.h"

signed *(__cdecl cardn(signed(arg))) {
auto signed *b;
auto signed r;
AND(r,0x00);
OR(r,0x01);
r = (r*(sizeof(arg)));
b = (signed*)(alloc(r));
if(!b) return(b);
*b = (arg);
return(b);
}
