# define CAR_H
# include "./../../../incl/config.h"

signed(__cdecl ecd_u_rr(signed char(*argp))) {
auto signed b;
auto signed r;
auto signed x = (0x06);
r = ct(argp);
if(!r) return(r);
b = cara(argp);
AND(b,mas_xe(x));
--r;
r = (r*(x));
SHL(b,r);
return(b+(ecd_u_rr(++argp)));
}
