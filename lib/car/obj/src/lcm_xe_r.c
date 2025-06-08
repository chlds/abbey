# define CAR_H
# include "./incl/config.h"

signed(__cdecl lcm_xe_r(signed(*args),signed(argp))) {
auto signed r;
if(!(0x00<(argp))) return(0x01);
r = (sizeof(args));
args = (args+(r/(sizeof(*args))));
r = (*args);
return(lcm(r,lcm_xe_r(args,--argp)));
}
