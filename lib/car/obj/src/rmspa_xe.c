# define CAR_H
# include "./incl/config.h"

signed char *(__cdecl rmspa_xe(signed char(*argp))) {
auto signed char *b;
b = rmspa(argp);
rlse(argp);
argp = (0x00);
return(b);
}
