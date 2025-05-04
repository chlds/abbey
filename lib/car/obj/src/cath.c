# define CAR_H
# define STDARG_H
# include "./incl/config.h"

signed char *(__cdecl cath(signed char *argp,...)) {
if(!argp) return(argp);
return(cath_r(&argp));
}
