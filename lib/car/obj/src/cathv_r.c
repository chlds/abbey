# define CAR_H
# include "./incl/config.h"

signed char **(__cdecl cathv_r(signed char(**argp))) {
auto signed char **b;
auto signed r;
r = ct_bb(argp);
r++;
r = (r*(sizeof(*argp)));
b = (signed char**)(alloc(r));
if(!b) return(b);
*b = (0x00);
return(cathv_rr(argp,b));
}
