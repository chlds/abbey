# define CAR_H
# include "./../../../incl/config.h"

signed(__cdecl cyb(signed char(*args),signed char(*argp))) {
if(!argp) return(0x00);
*argp = (signed char)(cara(args));
return(*argp);
}
