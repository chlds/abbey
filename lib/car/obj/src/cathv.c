# define CAR_H
# define STDARG_H
# include "./incl/config.h"

signed char **(__cdecl cathv(signed char *argp,...)) {
if(!argp) return(0x00);
return(cathv_r(&argp));
}
