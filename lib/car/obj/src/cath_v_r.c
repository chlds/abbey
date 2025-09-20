# define CAR_H
# include "./../../../incl/config.h"

signed char **(__cdecl cath_v_r(signed char(**argp))) {
auto signed char **b;
if(!argp) return(argp);
b = (0x00);
if(!(*argp)) return(b);
b = cathal_v(*argp);
if(!b) return(b);
return(casse_v(b,cath_v_r(++argp)));
}
