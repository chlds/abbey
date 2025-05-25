/* Synopsis

Reorder
*/


# define CAR_H
# include "./incl/config.h"

signed char *(__cdecl reord(signed char(*argp))) {
auto signed char *b;
if(!argp) return(argp);
b = (0x00);
if(!(lt(argp))) return(b);
b = cas(argp);
if(!b) return(b);
return(catne(b,reord(argp+(lt(argp)))));
}
