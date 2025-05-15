/* Synopsis

Reorder
*/


# define CAR_H
# include "./incl/config.h"

signed char *(__cdecl reord(signed char(*argp))) {
auto signed char *b;
auto signed char a[] = ("");
if(!argp) return(argp);
if(!(lt(argp))) return(catha(a,0x00));
b = cas(argp);
if(!b) return(b);
return(catne(b,reord(argp+(lt(argp)))));
}
