# define CAR_H
# include "./../../../incl/config.h"

signed(__cdecl cuesymb(signed char(*argp))) {
if(!(lt(argp))) return(0x00);
if(any_ofsymb(argp)) return(0x00);
return(0x01+(cuesymb(argp+(lt(argp)))));
}
