/* Synopsis

Interleave
*/


# define CAR_H
# include "./../../../incl/config.h"

signed char *(__cdecl ilv(signed char(*args),signed char(*argp))) {
auto signed char *b;
auto signed char a[] = ("\r\n");
if(!argp) return(args);
b = (a);
if(!(*argp)) b = (0x00);
return(catne(argp,catna(b,args)));
}
