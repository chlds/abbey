# define CAR_H
# include "./incl/config.h"

signed(__cdecl ords_apart(signed char(*args),signed char(**argp))) {
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
if(!(cmp_apart(args,*argp))) return(0x00);
return(0x01+(ords_apart(args,++argp)));
}
