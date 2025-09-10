# define CAR_H
# include "./../../../incl/config.h"

signed **(__cdecl catta_m(signed(**args),signed(**argp))) {
auto signed **b;
auto signed r;
r = cnt_m(argp);
r = (r+(cnt_m(args)));
b = (signed**)(alloc(++r*(sizeof(*b))));
cy_m(argp,cy_m(args,b));
return(b);
}
