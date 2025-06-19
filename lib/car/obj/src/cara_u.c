# define CAR_H
# include "./../../../incl/config.h"

signed(__cdecl cara_u(signed(*argp))) {
auto signed r;
if(!argp) return(0x00);
r = mas(sizeof(signed));
return(r&(*argp));
}
