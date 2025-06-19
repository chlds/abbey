# define CAR_H
# include "./../../../incl/config.h"

signed(__cdecl bury_u(signed(*argp))) {
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
*argp = (0x00);
return(0x01+(bury_u(++argp)));
}
