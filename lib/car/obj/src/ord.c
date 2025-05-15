# define CAR_H
# include "./incl/config.h"

signed(__cdecl ord(signed(args),signed char(*argp))) {
auto signed m = (0xFF);
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
if(!(args^(m&(*argp)))) return(0x00);
return(0x01+(ord(args,++argp)));
}
