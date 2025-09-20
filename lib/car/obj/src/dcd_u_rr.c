# define CAR_H
# include "./../../../incl/config.h"

signed char *(__cdecl dcd_u_rr(signed(args),signed(argp))) {
auto signed b;
auto signed r;
auto signed x = (0x06);
auto signed y = (0x02);
AND(r,0x00);
if(!(0x00<(argp))) return(cathal_xe(r));
OR(r,0x01);
b = dec(r_pow(y,r));
r = (0x01+(~r));
r = (r+(bpb()));
SHL(b,r);
r = (args);
AND(r,mas_xe(x));
OR(b,r);
SHR(args,x);
return(catno_xxe(b,dcd_u_rr(args,dec(argp))));
}
