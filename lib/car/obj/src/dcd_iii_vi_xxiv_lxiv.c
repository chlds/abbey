# define CAR_H
# include "./incl/config.h"

signed(__cdecl dcd_iii_vi_xxiv_lxiv(signed char(*argp))) {
auto signed b;
auto signed r;
AND(b,0x00);
if(!argp) return(b);
r = dcd_vi_lxiv(cara(argp));
AND(r,mas_xe(0x02));
SHL(r,0x06);
OR(b,r);
r = dcd_vi_lxiv(cara(++argp));
AND(r,mas_xe(0x06));
OR(b,r);
return(b);
}
