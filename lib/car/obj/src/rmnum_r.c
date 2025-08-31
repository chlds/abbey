# define CAR_H
# include "./../../../incl/config.h"

signed char *(__cdecl rmnum_r(signed char(*argp))) {
if(!(lt(argp))) return(argp);
if(anynum(argp)) return(argp);
return(rmnum_r(dele_xe(argp)));
}
