# define CAR_H
# include "./../../../incl/config.h"

signed(__cdecl cnt_e_xe(signed(__cdecl**argp)(signed(args),void(*argt)))) {
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
return(0x01+(cnt_e_xe(++argp)));
}
