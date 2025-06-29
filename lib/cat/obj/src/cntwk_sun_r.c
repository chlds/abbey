# define CAT_H
# define TIME_H
# include "./../../../incl/config.h"

signed(__cdecl cntwk_sun_r(signed(args),void(*argp))) {
auto signed b;
auto signed r;
auto time_t e;
auto signed w = (60*(60*(24*(7))));
r = ctdn_wy(args,argp);
if(r<(0x00)) return(0x00);
e = (0x01+(~(r*(w))));
ADD(e,*(time_t*)(argp));
b = cal_dm(args,&e);
if(b<(0x00)) return(0x00);
if(!(0x01<(b))) return(0x01+(r));
return(0x02+(r));
}
