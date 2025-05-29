# define CAR_H
# include "./incl/config.h"

signed(__cdecl cuespa(signed char(*argp))) {
if(!(lt(argp))) return(0x00);
if(any_ofspa(argp)) return(0x00);
return(0x01+(cuespa(argp+(lt(argp)))));
}
