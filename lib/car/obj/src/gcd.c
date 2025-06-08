/* Synopsis

Greatest Common Divisor
*/


# define CAR_H
# include "./incl/config.h"

signed(__cdecl gcd(signed(args),signed(argp))) {
auto signed r;
r = gcd_r(args,argp);
if(r<(0x00)) r = (0x01+(~r));
if(!r) INC(r);
return(r);
}
