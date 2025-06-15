# define CAR_H
# define STDARG_H
# include "./../../../incl/config.h"

signed char **(__cdecl cath_v(signed char *argp,...)) {
if(!argp) return(0x00);
return(cath_v_r(&argp));
}
