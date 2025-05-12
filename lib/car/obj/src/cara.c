# define CAR_H
# include "./incl/config.h"

signed(__cdecl cara(signed char(*argp))) {
auto signed r;
auto signed m = (0xFF);
AND(r,0x00);
if(!argp) return(r);
r = (signed)(m&(*argp));
return(r);
}
