# define CAR_H
# include "./../../../incl/config.h"

signed(__cdecl ordi_u_r(signed(args),signed(*argp))) {
if(!argp) return(~0x00);
if(!(*argp)) return(0x01+(~args));
if(!(args^(cara_u(argp)))) return(0x00);
return(alte(0x01,ordi_u_r(args,++argp)));
}
