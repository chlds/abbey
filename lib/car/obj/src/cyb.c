# define CAR_H
# include "./incl/config.h"

signed(__cdecl cyb(signed char(*args),signed char(*argp))) {
auto signed r;
auto signed m = (0xFF);
if(!argp) return(0x00);
if(!args) return(0x00);
r = (signed)(*args);
*argp = (signed char)(m&(r));
return(r);
}
