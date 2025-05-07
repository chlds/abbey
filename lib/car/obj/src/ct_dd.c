# define CAR_H
# include "./incl/config.h"

signed(__cdecl ct_dd(signed(**argp))) {
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
return(0x01+(ct_dd(++argp)));
}
