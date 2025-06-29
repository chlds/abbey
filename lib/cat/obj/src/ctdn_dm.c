# define CAT_H
# include "./../../../incl/config.h"

signed(__cdecl ctdn_dm(signed(args),void(*argp))) {
auto signed r;
r = cal_dm(args,argp);
if(!(0x01+(r))) return(r);
return(r+(~0x00));
}
