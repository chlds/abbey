# define CAR_H
# include "./../../../incl/config.h"

signed(__cdecl bpb_r(void)) {
auto signed char r;
AND(r,0x00);
NOT(r);
return(bpb_rr(&r));
}
