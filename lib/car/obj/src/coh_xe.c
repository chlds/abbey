# define CAR_H
# include "./../../../incl/config.h"

signed char *(__cdecl coh_xe(signed char(*argp))) {
auto signed r;
r = coh(argp);
if(!r) return(0x00);
return(r+(argp));
}
