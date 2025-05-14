# define CAR_H
# include "./incl/config.h"

signed(__cdecl ct_xe(signed char(*argp))) {
auto signed r;
r = lt(argp);
if(!r) return(r);
argp = (r+(argp));
return(0x01+(ct_xe(argp)));
}
