# define CAR_H
# include "./../../../incl/config.h"

signed char **(__cdecl cathy_v(signed char(**argp))) {
auto signed char **b;
auto signed r;
if(!argp) return(argp);
r = cnt_v(argp);
b = (signed char**)(alloc(++r*(sizeof(*argp))));
cym_v(argp,b);
return(b);
}
