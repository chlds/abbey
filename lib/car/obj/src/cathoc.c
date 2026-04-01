/* Synopsis

Copy deeply
*/


# define CAR_H
# include "./../../../incl/config.h"

signed char **(__cdecl cathoc(signed char(*argp))) {
auto signed r;
AND(r,0x00);
if(argp) OR(r,0x01);
return(cathoc_r(argp,alloc(++r*(sizeof(argp)))));
}
