# define CAR_H
# include "./incl/config.h"

signed(__cdecl xcge(signed(*args),signed(*argp))) {
auto signed r;
AND(r,0x00);
if(!argp) return(r);
if(!args) return(r);
r = (*args);
r = (r^(*argp));
*argp = (r^(*argp));
*args = (r^(*args));
return(0x01);
}
