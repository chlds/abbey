# define CAT_H
# define TIME_H
# include "./../../../incl/config.h"

signed(__cdecl cal_sm_xe(signed(args),void(*argp))) {
auto time_t *b;
auto signed r;
auto signed m = (60);
if(!argp) return(0x00);
b = (time_t*)(argp);
r = (m*(cal_hr(args,b)));
if(r<(0x00)) return(0x00);
r = (m*(r+(cal_mn(args,b))));
if(r<(0x00)) return(0x00);
return(r);
}
