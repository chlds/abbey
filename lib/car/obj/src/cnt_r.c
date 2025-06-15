# define CAR_H
# include "./../../../incl/config.h"

signed(__cdecl cnt_r(signed char(**argp))) {
auto signed r;
if(!argp) return(0x00);
r = ct(*argp);
if(!r) return(r);
return(r+(cnt_r(++argp)));
}
