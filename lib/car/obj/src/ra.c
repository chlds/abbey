/* Synopsis

In a positional numeral system, the radix
*/


# define CAR_H
# include "./incl/config.h"

signed(__cdecl ra(signed(args),signed char(*argp))) {
auto signed r;
auto signed i = (0x02);
auto signed b = (0x01);
r = ct(argp);
if(r<(i)) return(b);
if(args<(i)) return(i);
if(r<(args)) return(r);
return(args);
}
