/* Synopsis

In a positional numeral system, the radix
*/


# define CAR_H
# include "./incl/config.h"

signed(__cdecl ra(signed char(*args),signed(argp))) {
auto signed r;
auto signed i = (0x02);
auto signed b = (0x01);
r = ct(args);
if(r<(i)) return(b);
if(argp<(i)) return(i);
if(r<(argp)) return(r);
return(argp);
}
