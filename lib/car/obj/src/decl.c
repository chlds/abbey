# define CAR_H
# include "./incl/config.h"

signed(__cdecl decl(signed(arg))) {
auto signed r;
auto signed m;
m = mas(sizeof(signed short));
AND(r,0x00);
OR(r,arg);
AND(r,m);
DEC(r);
AND(r,m);
NOT(m);
AND(arg,m);
OR(arg,r);
return(arg);
}
