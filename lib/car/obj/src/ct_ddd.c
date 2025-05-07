# define CAR_H
# include "./incl/config.h"

signed(__cdecl ct_ddd(signed(***argp))) {
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
return(0x01+(ct_ddd(++argp)));
}
