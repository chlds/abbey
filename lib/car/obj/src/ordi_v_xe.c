# define CAR_H
# include "./../../../incl/config.h"

signed(__cdecl ordi_v_xe(signed char(*args),signed char(**argp))) {
auto signed r;
r = ordi_v(args,argp);
rlse_v(argp);
argp = (0x00);
return(r);
}
