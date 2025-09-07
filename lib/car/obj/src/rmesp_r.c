# define CAR_H
# include "./../../../incl/config.h"

signed char *(__cdecl rmesp_r(signed char(*argp))) {
if(!(lt(argp))) return(argp);
if(anyesp(argp)) return(argp);
return(rmesp_r(dele_xe(argp)));
}
