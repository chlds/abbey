# define CAR_H
# include "./../../../incl/config.h"

signed(__cdecl gcd_xe_r(signed(*args),signed(argp))) {
auto signed r;
if(!(0x00<(argp))) return(0x00);
r = (sizeof(args));
args = (args+(r/(sizeof(*args))));
r = (*args);
return(gcd(r,gcd_xe_r(args,--argp)));
}
