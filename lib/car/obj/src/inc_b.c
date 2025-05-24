# define CAR_H
# include "./incl/config.h"

signed char **(__cdecl inc_b(signed char(**argp))) {
if(!argp) return(argp);
return(++argp);
}
