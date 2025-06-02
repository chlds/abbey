# define CAR_H
# include "./incl/config.h"

signed(__cdecl cntev(signed char(*argp))) {
auto signed r;
r = cuev_xe(argp);
if(!r) return(r);
return(0x01+(cntev(argp+(r))));
}
