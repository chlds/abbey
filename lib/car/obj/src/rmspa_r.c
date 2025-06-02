# define CAR_H
# include "./incl/config.h"

signed char *(__cdecl rmspa_r(signed char(*argp))) {
if(!(lt(argp))) return(argp);
if(any_ofspa(argp)) return(argp);
return(rmspa_r(dele_xe(argp)));
}
