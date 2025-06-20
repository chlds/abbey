# define CAR_H
# include "./../../../incl/config.h"

signed(__cdecl cym_u(signed(*args),signed(*argp))) {
if(!(cyb_u(args,argp))) return(0x00);
return(0x01+(cym_u(++args,++argp)));
}
