# define CAR_H
# include "./../../../incl/config.h"

signed(__cdecl any_ofnoalphanum(signed char(*argp))) {
auto signed r;
r = any_ofnoalphanum_r(argp);
if(!r) return(~r);
r = (0x01+(~r));
return(r+(ct_xe(argp)));
}
