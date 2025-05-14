# define CAR_H
# define STDLIB_H
# include "./incl/config.h"

signed(__cdecl rl_w(signed char(**argp))) {
auto signed r;
if(!argp) return(0x00);
r = rl_w_r(argp);
rl(argp);
return(r);
}
