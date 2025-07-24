# define CAR_H
# include "./../../../incl/config.h"

signed(__cdecl any_of_r(signed char(*args),signed char(*argp))) {
auto signed char *b;
auto signed r;
if(!args) return(0x00);
b = cas(argp);
if(!b) return(0x00);
r = cmp_apart(b,args);
rlse(b);
b = (0x00);
if(!r) return(ct_xe(argp));
return(any_of_r(args,argp+(lt(argp))));
}
