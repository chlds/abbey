# define CAR_H
# include "./../../../incl/config.h"

signed char **(__cdecl catta_xe(signed char(**args),signed char(**argp))) {
auto signed char **b;
auto signed r;
b = (0x00);
r = cnt_b(argp);
r = (r+(cnt_b(args)));
r++;
r = (r*(sizeof(*b)));
b = (signed char**)(alloc(r));
if(!b) return(b);
cy_b(argp,cy_b(args,b));
return(b);
}
