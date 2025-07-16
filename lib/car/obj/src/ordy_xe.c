# define CAR_H
# include "./../../../incl/config.h"

signed(__cdecl ordy_xe(signed char(*argt),signed char(**args),signed(**argp))) {
auto signed r;
r = ordy(argt,args,argp);
rlse_d(argp);
argp = (0x00);
return(r);
}
