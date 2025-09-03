# define CAR_H
# include "./../../../incl/config.h"

signed(__cdecl ordi_u(signed(args),signed(*argp))) {
if(args<(0x00)) return(args);
return(ordi_u_r(args,argp));
}
