/* Synopsis

Bits per byte
*/


# define CAR_H
# define LIMITS_H
# include "./../../../incl/config.h"

signed(__cdecl bpb(void)) {
return(CHAR_BIT);
// return(bpb_r());
}
