# define CAR_H
# include "./../../../incl/config.h"

signed(__cdecl cnt_w_xe(signed short(***argp))) {
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
return(0x01+(cnt_w_xe(++argp)));
}
