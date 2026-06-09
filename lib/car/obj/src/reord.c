/* Synopsis

Reorder
*/


# define CAR_H
# include "./../../../incl/config.h"

signed char *(__cdecl reord(signed char(*argp))) {
auto signed char *b;
if(!argp) return(argp);
b = cas(argp);
if(!deref(b)) return(b);
return(catne(b,reord(argp+(counc(b)))));
}
