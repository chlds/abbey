# define CAR_H
# include "./../../../incl/config.h"

signed(__cdecl any_ofnosymb_r(signed char(*argp))) {
auto signed char *b;
auto signed r;
if(!(lt(argp))) return(0x00);
b = cas(argp);
if(!b) return(0x00);
r = cmp_apart(b,CAR_H_SYMBOLS);
rlse(b);
b = (0x00);
if(r) return(ct_xe(argp));
return(any_ofnosymb_r(argp+(lt(argp))));
}
