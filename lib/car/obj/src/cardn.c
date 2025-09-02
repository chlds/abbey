# define CAR_H
# include "./../../../incl/config.h"

signed *(__cdecl cardn(signed(arg))) {
auto signed *b;
auto signed r;
AND(r,0x00);
b = (signed*)(alloc(++r*(sizeof(arg))));
if(b) *b = (arg);
return(b);
}
