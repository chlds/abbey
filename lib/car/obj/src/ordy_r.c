# define CAR_H
# include "./../../../incl/config.h"

signed(__cdecl ordy_r(signed char(*argt),signed char(**args),signed(**argp))) {
auto signed r;
if(!args) return(0x00);
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
if(!(*args)) return(0x00);
AND(r,0x00);
if(!(cmpe_apart(*args,argt))) OR(r,**argp);
return(r|(ordy_r(argt,++args,++argp)));
}
