/* Synopsis

In a positional numeral system, the radix
*/


# define CAR_H
# include "./../../../incl/config.h"

signed(__cdecl ra(signed char(*args),signed(argp))) {
auto signed r;
auto signed b = (0x02);
auto signed u = (0x01);
r = counc(args);
if(r<(b)) return(u);
if(argp<(b)) return(b);
if(r<(argp)) return(r);
return(argp);
}
