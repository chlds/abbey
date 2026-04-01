/* Synopsis

Copy shallowly
*/


# define CAR_H
# include "./../../../incl/config.h"

signed char **(__cdecl cathol(signed char(*argp))) {
auto signed r;
AND(r,0x00);
if(argp) OR(r,0x01);
return(cathol_r(argp,alloc(++r*(sizeof(argp)))));
}
