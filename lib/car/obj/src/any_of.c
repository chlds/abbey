# define CAR_H
# include "./../../../incl/config.h"

signed(__cdecl any_of(signed char(*args),signed char(*argp))) {
auto signed r;
r = any_of_r(args,argp);
if(!r) return(~r);
r = (0x01+(~r));
return(r+(ct_xe(argp)));
}
