# define CAT_H
# include "./../../../incl/config.h"

signed(__cdecl ordwk_mo(signed(args),void(*argp))) {
auto signed b;
auto signed r;
auto signed w = (7);
AND(b,0x00);
if(!argp) return(b);
r = cal_dm(args,argp);
if(!(0x01+(r))) return(b);
if(r%(w)) INC(b);
return(b+(r/(w)));
}
