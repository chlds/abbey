# define CAR_H
# include "./../../../incl/config.h"

signed *(__cdecl catta_u(signed(*args),signed(*argp))) {
auto signed *b;
auto signed r;
b = (0x00);
r = ct_u(argp);
r = (r+(ct_u(args)));
r++;
b = (signed*)(alloc(r*(sizeof(*b))));
cy_u(argp,cy_u(args,b));
return(b);
}
