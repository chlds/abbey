# define CAR_H
# include "./../../../incl/config.h"

signed char **(__cdecl cathy_b(signed char(**argp))) {
auto signed char **b;
auto signed r;
if(!argp) return(argp);
r = cnt_b(argp);
r++;
r = (r*(sizeof(*argp)));
b = (signed char **)(alloc(r));
cym_b(argp,b);
return(b);
}
