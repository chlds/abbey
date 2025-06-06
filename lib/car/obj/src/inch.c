# define CAR_H
# include "./incl/config.h"

signed(__cdecl inch(signed(arg))) {
auto signed r;
auto signed m;
auto signed b;
b = bpb();
b = (b*(sizeof(signed short)));
m = mas(sizeof(signed short));
AND(r,0x00);
OR(r,arg);
SHR(r,b);
AND(r,m);
INC(r);
AND(r,m);
AND(arg,m);
SHL(r,b);
NOT(m);
AND(r,m);
OR(arg,r);
return(arg);
}
