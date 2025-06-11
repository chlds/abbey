# define CAR_H
# include "./incl/config.h"

signed char *(__cdecl ecd_ii_vi_xvi_lxiv(signed char(*argp))) {
auto signed b;
auto signed r;
AND(b,0x00);
if(!argp) return(argp);
r = cara(argp);
AND(r,mas_xe(0x02));
SHL(r,0x04);
OR(b,r);
r = cara(++argp);
SHR(r,0x04);
AND(r,mas_xe(0x04));
OR(b,r);
r = ecd_vi_lxiv(b);
return(catho_xxe(r,ecd_iii_vi_xvi_lxiv(argp)));
}
