# define CAR_H
# include "./incl/config.h"

signed(__cdecl cuev_rr(signed char(*argp))) {
auto signed r;
r = cuesp(argp);
if(r) return(r);
r = cuex(argp,cuenum);
return(r+(cuesp(argp+(bpl(argp,r)))));
}
