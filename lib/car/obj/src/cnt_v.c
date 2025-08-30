# define CAR_H
# include "./../../../incl/config.h"

signed(__cdecl cnt_v(signed char(**argp))) {
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
return(0x01+(cnt_v(++argp)));
}
