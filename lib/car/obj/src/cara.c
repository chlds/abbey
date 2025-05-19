# define CAR_H
# include "./incl/config.h"

signed(__cdecl cara(signed char(*argp))) {
auto signed r;
if(!argp) return(0x00);
r = mas();
return(r&(*argp));
}
