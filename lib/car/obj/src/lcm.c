/* Synopsis

Least Common Multiple
*/


# define CAR_H
# include "./../../../incl/config.h"

signed(__cdecl lcm(signed(args),signed(argp))) {
auto signed r;
r = (args*(argp));
return(r/(gcd(args,argp)));
}
