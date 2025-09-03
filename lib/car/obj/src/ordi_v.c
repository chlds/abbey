# define CAR_H
# include "./../../../incl/config.h"

signed(__cdecl ordi_v(signed char(*args),signed char(**argp))) {
if(!args) return(~0x00);
return(ordi_v_r(args,argp));
}
