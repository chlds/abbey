# define CAR_H
# include "./../../../incl/config.h"

signed(__cdecl rlse_d_r(signed(**argp))) {
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
**argp = (0x00);
rl(*argp);
*argp = (0x00);
return(0x01+(rlse_d_r(++argp)));
}
