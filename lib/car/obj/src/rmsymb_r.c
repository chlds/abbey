# define CAR_H
# include "./../../../incl/config.h"

signed char *(__cdecl rmsymb_r(signed char(*argp))) {
if(!(lt(argp))) return(argp);
if(any_ofsymb(argp)) return(argp);
return(rmsymb_r(dele_xe(argp)));
}
