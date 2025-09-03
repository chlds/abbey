# define CAR_H
# include "./../../../incl/config.h"

signed(__cdecl ordi_m_xe(signed(args),signed(**argp))) {
auto signed r;
r = ordi_m(args,argp);
rlse_m(argp);
argp = (0x00);
return(r);
}
