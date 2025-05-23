# define CAR_H
# include "./incl/config.h"

signed(__cdecl rl_w_r(signed char(**argp))) {
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
rlse(*argp);
*argp = (0x00);
return(0x01+(rl_w_r(++argp)));
}
