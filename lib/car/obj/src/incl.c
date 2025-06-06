# define CAR_H
# include "./incl/config.h"

signed(__cdecl incl(signed(arg))) {
auto signed r;
auto signed m;
m = mas(sizeof(signed short));
AND(r,0x00);
OR(r,arg);
AND(r,m);
INC(r);
AND(r,m);
NOT(m);
AND(arg,m);
OR(arg,r);
return(arg);
}
