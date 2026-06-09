# define CAR_H
# include "./../../../incl/config.h"

signed(__cdecl cnt_v_xe(signed char(***argp))) {
if(!deref_xxe(argp)) return(0x00);
return(0x01+(cnt_v_xe(++argp)));
}
