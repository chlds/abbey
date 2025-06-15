# define CAR_H
# include "./../../../incl/config.h"

signed(__cdecl gcd_r(signed(args),signed(argp))) {
if(args<(argp)) return(gcd_rr(argp,args));
return(gcd_rr(args,argp));
}
