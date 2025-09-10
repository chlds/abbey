# define CAR_H
# include "./../../../incl/config.h"

signed char **(__cdecl catta_v(signed char(**args),signed char(**argp))) {
auto signed char **b;
auto signed r;
r = cnt_v(argp);
r = (r+(cnt_v(args)));
b = (signed char**)(alloc(++r*(sizeof(*b))));
cy_v(argp,cy_v(args,b));
return(b);
}
