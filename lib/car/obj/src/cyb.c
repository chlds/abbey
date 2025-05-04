# define CAR_H
# include "./incl/config.h"

signed(__cdecl cyb(signed char(*args),signed char(*argp))) {
auto signed r;
auto signed mask = (0xFF);
if(!argp) return(0x00);
if(!args) return(0x00);
r = (signed)(*args);
*argp = (signed char)(mask&(r));
return(r);
}
