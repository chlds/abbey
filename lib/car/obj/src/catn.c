# define CAR_H
# define STDARG_H
# include "./../../../incl/config.h"

signed char *(__cdecl catn(signed char *argp,...)) {
if(!argp) return(argp);
return(catn_r(&argp));
}
