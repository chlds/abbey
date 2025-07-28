# define CAR_H
# include "./../../../incl/config.h"

signed(__cdecl ct_xe(signed char(*argp))) {
auto signed r;
r = algn(argp);
if(!r) return(r);
return(0x01+(ct_xe(argp+(r))));
}
