# define CAR_H
# include "./../../../incl/config.h"

signed char *(__cdecl catta(signed char(*args),signed char(*argp))) {
auto signed char *b;
auto signed r;
b = (0x00);
r = ct(argp);
r = (r+(ct(args)));
r++;
r = (r*(sizeof(*b)));
b = (signed char*)(alloc(r));
if(!b) return(b);
*b = (0x00);
cy(argp,cy(args,b));
return(b);
}
