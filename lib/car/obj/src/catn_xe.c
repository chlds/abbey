# define CAR_H
# define STDARG_H
# include "./../../../incl/config.h"

signed char *(__cdecl catn_xe(signed char *argp,...)) {
if(!argp) return(argp);
return(catn_xe_r(&argp));
}
