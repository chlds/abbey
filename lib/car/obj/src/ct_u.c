# define CAR_H
# include "./../../../incl/config.h"

signed(__cdecl ct_u(signed(*argp))) {
if(!derefr(argp)) return(0x00);
return(0x01+(ct_u(++argp)));
}
