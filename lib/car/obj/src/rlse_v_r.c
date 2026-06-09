# define CAR_H
# include "./../../../incl/config.h"

signed(__cdecl rlse_v_r(signed char(**argp))) {
if(!deref_xe(argp)) return(0x00);
rlse(*argp);
*argp = (0x00);
return(0x01+(rlse_v_r(++argp)));
}
