# define CAR_H
# include "./../../../incl/config.h"

signed(__cdecl ecd_vi_lxiv(signed(arg))) {
auto signed char *e = (CAR_H_BASE_LXIV);
if(arg<(0x00)) return(0x00);
if(!(arg<(ct(e)))) return(0x00);
return(*(arg+(e)));
}
