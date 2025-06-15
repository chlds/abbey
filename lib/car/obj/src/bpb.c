/* Synopsis

Bits per byte
*/


# define CAR_H
# include "./../../../incl/config.h"

signed(__cdecl bpb(void)) {
auto signed char r;
AND(r,0x00);
NOT(r);
return(bpb_r(&r));
}
