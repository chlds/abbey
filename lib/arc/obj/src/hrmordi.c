/* Synopsis

Headroom
*/


# define ARC_H
# include "./../../../incl/config.h"

signed(__cdecl hrmordi(void)) {
auto signed r;
r = rows();
ADD(r,0x01+(~(curordi())));
INC(r);
return(r);
}
