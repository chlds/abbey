# define CAR_H
# include "./../../../incl/config.h"

signed(__cdecl ordi_u_xe(signed(args),signed(*argp))) {
auto signed r;
r = ordi_u(args,argp);
rlse_u(argp);
argp = (0x00);
return(r);
}
