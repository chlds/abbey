# define CAR_H
# include "./../../../incl/config.h"

signed(__cdecl cymms(signed short(*args),signed short(*argp))) {
if(!argp) return(0x00);
*argp = (signed short)(caras(args));
return(*argp);
}
