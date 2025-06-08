/* Synopsis

Greatest Common Divisor
*/


# define CAR_H
# include "./incl/config.h"

signed(__cdecl gcd(signed(args),signed(argp))) {
if(args<(argp)) return(gcd_r(argp,args));
return(gcd_r(args,argp));
}
