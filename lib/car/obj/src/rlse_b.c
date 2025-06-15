# define CAR_H
# include "./../../../incl/config.h"

signed(__cdecl rlse_b(signed char(**argp))) {
auto signed r;
if(!argp) return(0x00);
r = rlse_b_r(argp);
rl(argp);
argp = (0x00);
return(r);
}
