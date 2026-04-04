# define CAR_H
# define LIMITS_H
# include "./../../../incl/config.h"

signed(__cdecl shl(signed(args),signed(argp))) {
auto unsigned r;
r = (unsigned)(argp);
if(!(0x00<(args))) return(argp);
if(!(args<(CHAR_BIT*(sizeof(r))))) return(0x00);
return(r<<(args));
}
