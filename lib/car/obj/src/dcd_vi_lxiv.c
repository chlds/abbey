# define CAR_H
# include "./incl/config.h"

signed(__cdecl dcd_vi_lxiv(signed(arg))) {
auto signed char *b;
auto signed r;
AND(r,0x00);
OR(r,CAR_H_EQ);
if(EQ(r,arg)) return(0x00);
b = (CAR_H_BASE_LXIV);
r = ord(arg,b);
if(!(r<(ct(b)))) return(0x00);
return(r);
}
