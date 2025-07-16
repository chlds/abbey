# define CAR_H
# include "./../../../incl/config.h"

signed(__cdecl ordy(signed char(*argt),signed char(**args),signed(**argp))) {
if(!argt) return(0x00);
return(ordy_r(argt,args,argp));
}
