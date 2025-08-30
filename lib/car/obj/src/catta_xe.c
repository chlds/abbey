# define CAR_H
# include "./../../../incl/config.h"

signed char **(__cdecl catta_xe(signed char(**args),signed char(**argp))) {
auto signed char **b;
auto signed r;
b = (0x00);
r = cnt_v(argp);
r = (r+(cnt_v(args)));
r++;
b = (signed char**)(alloc(r*(sizeof(*b))));
cy_v(argp,cy_v(args,b));
return(b);
}
