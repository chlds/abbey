# define CAR_H
# include "./../../../incl/config.h"

signed *(__cdecl catta_u(signed(*args),signed(*argp))) {
auto signed *b;
auto signed r;
b = (0x00);
r = ct_u(argp);
r = (r+(ct_u(args)));
r++;
r = (r*(sizeof(*b)));
b = (signed*)(alloc(r));
if(!b) return(b);
*b = (0x00);
cy_u(argp,cy_u(args,b));
return(b);
}
