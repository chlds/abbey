# define CAR_H
# include "./../../../incl/config.h"

signed(__cdecl cnt_e(signed(__cdecl**argp)(void(*args)))) {
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
return(0x01+(cnt_e(++argp)));
}
