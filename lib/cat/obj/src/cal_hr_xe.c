# define CAT_H
# define TIME_H
# include "./../../../incl/config.h"

signed(__cdecl cal_hr_xe(signed(args),void(*argp))) {
auto signed r;
auto signed m = (12);
r = cal_hr(args,argp);
if(!(0x01+(r))) return(r);
r = (r%(m));
if(!r) OR(r,m);
return(r);
}
