# define CAT_H
# define TIME_H
# include "./../../../incl/config.h"

signed(__cdecl cal_sm_xe(signed(args),void(*argp))) {
auto signed r;
auto signed m = (60);
if(!argp) return(0x00);
r = cal_mn(args,argp);
if(r<(0x00)) return(0x00);
r = (m*(r+(m*(cal_hr(args,argp)))));
if(r<(0x00)) return(0x00);
return(r);
}
