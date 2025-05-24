# define CAR_H
# define STDARG_H
# include "./incl/config.h"

signed char **(__cdecl cath_b(signed char *argp,...)) {
if(!argp) return(0x00);
return(cath_b_r(&argp));
}
