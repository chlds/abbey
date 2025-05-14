# define CAR_H
# include "./incl/config.h"

signed(__cdecl rel_w_r(signed(**argp))) {
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
**argp = (0x00);
rl(*argp);
*argp = (0x00);
return(0x01+(rel_w_r(++argp)));
}
