# define CAR_H
# include "./../../../incl/config.h"

signed *(__cdecl catta_u(signed(*args),signed(*argp))) {
auto signed *b;
auto signed r;
r = ct_u(argp);
r = (r+(ct_u(args)));
b = (signed*)(alloc(++r*(sizeof(*b))));
cy_u(argp,cy_u(args,b));
return(b);
}
