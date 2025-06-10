# define CAR_H
# include "./incl/config.h"

signed(__cdecl dcd_i_vi_xxiv_lxiv(signed char(*argp))) {
auto signed b;
auto signed r;
AND(b,0x00);
if(!argp) return(b);
r = dcd_vi_lxiv(cara(argp));
AND(r,mas_xe(0x06));
SHL(r,0x02);
OR(b,r);
r = dcd_vi_lxiv(cara(++argp));
SHR(r,0x04);
AND(r,mas_xe(0x02));
OR(b,r);
return(drft(b,dcd_ii_vi_xxiv_lxiv(argp)));
}
