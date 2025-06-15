# define CAR_H
# include "./../../../incl/config.h"

signed(__cdecl cuex_r(signed char(*argp))) {
auto signed r;
r = cuesymb(argp);
if(r) return(r);
return(cuex_rr(argp));
}
