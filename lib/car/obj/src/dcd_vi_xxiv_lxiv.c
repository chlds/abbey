# define CAR_H
# include "./../../../incl/config.h"

signed(__cdecl dcd_vi_xxiv_lxiv(signed char(*argp))) {
auto signed r;
auto signed q = (0x04);
r = ct(argp);
if(!r) return(r);
if(r%(q)) return(0x00);
r = dcd_i_vi_xxiv_lxiv(argp);
r = reordb(r,sizeof(signed));
SHR(r,bpb());
AND(r,mas_xe(lcm(8,6)));
return(r);
}
