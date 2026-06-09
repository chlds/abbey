# define CAR_H
# include "./../../../incl/config.h"

signed(__cdecl cntto(signed char(*args),signed char(*argp))) {
if(!deref(argp)) return(0x00);
if(!(cmpe_part(args,argp))) return(0x00);
return(0x01+(cntto(args,++argp)));
}
