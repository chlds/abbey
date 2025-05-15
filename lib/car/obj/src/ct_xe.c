# define CAR_H
# include "./incl/config.h"

signed(__cdecl ct_xe(signed char(*argp))) {
if(!(lt(argp))) return(0x00);
return(0x01+(ct_xe(argp+(lt(argp)))));
}
