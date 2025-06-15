# define CAR_H
# include "./../../../incl/config.h"

signed(__cdecl any_ofnum(signed char(*argp))) {
auto signed r;
r = any_ofnum_r(argp);
if(!r) return(~r);
r = (0x01+(~r));
return(r+(ct_xe(argp)));
}
