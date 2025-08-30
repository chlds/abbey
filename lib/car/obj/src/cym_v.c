# define CAR_H
# include "./../../../incl/config.h"

signed(__cdecl cym_v(signed char(**args),signed char(**argp))) {
if(!(cyb_v(args,argp))) return(0x00);
return(0x01+(cym_v(++args,++argp)));
}
