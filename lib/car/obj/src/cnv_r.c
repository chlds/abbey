# define CAR_H
# include "./incl/config.h"

signed(__cdecl cnv_r(signed char(*args),signed(argp))) {
auto signed char *b;
auto signed r;
AND(r,0x00);
b = reord(args);
if(!b) return(r);
r = cnv_rr(b,argp);
bury(b);
rl(b);
b = (0x00);
return(r);
}
