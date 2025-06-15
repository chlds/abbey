# define CAR_H
# include "./../../../incl/config.h"

signed(__cdecl cnv_r(signed(args),signed char(*argp))) {
auto signed char *b;
auto signed r;
AND(r,0x00);
b = reord(argp);
if(!b) return(r);
r = cnv_rr(args,b);
rlse(b);
b = (0x00);
return(r);
}
