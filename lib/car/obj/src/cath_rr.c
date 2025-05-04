# define CAR_H
# include "./incl/config.h"

signed char *(__cdecl cath_rr(signed char(**args),signed char(*argp))) {
auto signed char *b;
auto signed r;
if(!args) return(argp);
if(!(*args)) return(argp);
b = (0x00);
r = cnt(*args,argp,b);
r++;
r = (r*(sizeof(*b)));
b = (signed char*)(alloc(r));
if(!b) return(argp);
*b = (0x00);
cy(*args,cy(argp,b));
bury(argp);
rl(argp);
argp = (b);
b = (0x00);
return(cath_rr(++args,argp));
}
