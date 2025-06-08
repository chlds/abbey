# define CAR_H
# include "./incl/config.h"

signed(__cdecl gcd_rr(signed(args),signed(argp))) {
if(!argp) return(args);
return(gcd_rr(argp,args%(argp)));
}
