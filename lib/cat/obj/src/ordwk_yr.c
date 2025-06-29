# define CAT_H
# define TIME_H
# include "./../../../incl/config.h"

signed(__cdecl ordwk_yr(signed(args),void(*argp))) {
auto signed b;
auto signed r;
auto time_t e;
auto signed w = (60*(60*(24*(7))));
r = ordwk_mo(args,argp);
if(!r) return(r);
b = cal_mo(args,argp);
if(!(0x01+(b))) return(0x01+(b));
if(!b) return(r);
e = (0x01+(~(r*(w))));
ADD(e,*(time_t*)(argp));
argp = (&e);
return(r+(ordwk_yr(args,argp)));
}
