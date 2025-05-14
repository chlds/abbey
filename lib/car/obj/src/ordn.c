# define CAR_H
# include "./incl/config.h"

signed(__cdecl ordn(signed(args),signed(*argp))) {
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
if(!(args^(*argp))) return(0x00);
return(0x01+(ordn(args,++argp)));
}
