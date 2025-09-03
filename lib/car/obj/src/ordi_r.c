# define CAR_H
# include "./../../../incl/config.h"

signed(__cdecl ordi_r(signed(args),signed char(*argp))) {
if(!argp) return(~0x00);
if(!(*argp)) return(0x01+(~args));
if(!(args^(cara(argp)))) return(0x00);
return(alte(0x01,ordi_r(args,++argp)));
}
