# define CAR_H
# include "./../../../incl/config.h"

signed(__cdecl ordi_v_r(signed char(*args),signed char(**argp))) {
if(!argp) return(~0x00);
if(!(*argp)) return(~0x00);
if(!(cmp(args,*argp))) return(0x00);
return(alte(0x01,ordi_v_r(args,++argp)));
}
