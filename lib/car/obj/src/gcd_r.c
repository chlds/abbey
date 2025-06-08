# define CAR_H
# include "./incl/config.h"

signed(__cdecl gcd_r(signed(args),signed(argp))) {
if(!argp) return(args);
return(gcd_r(argp,args%(argp)));
}
