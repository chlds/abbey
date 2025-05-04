# define CAR_H
# include "./incl/config.h"

signed(__cdecl ct(signed char(*argp))) {
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
return(0x01+(ct(++argp)));
}
