/* Synopsis

Headroom
*/


# define ARC_H
# include "./../../../incl/config.h"

signed(__cdecl hrmabsc(void)) {
auto signed r;
r = colms();
ADD(r,0x01+(~(curabsc())));
INC(r);
return(r);
}
