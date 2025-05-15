# define CAR_H
# include "./incl/config.h"

signed(__cdecl ords_part(signed char(*args),signed char(**argp))) {
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
if(!(cmp_part(args,*argp))) return(0x00);
return(0x01+(ords_part(args,++argp)));
}
