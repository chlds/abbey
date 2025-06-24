# define CAT_H
# define TIME_H
# include "./../../../incl/config.h"

signed(__cdecl cnt_tz(void(*argp))) {
auto time_t *b;
auto signed e;
auto signed r;
auto signed d = (60*(60*(24)));
auto signed l = (0x01);
auto signed g = (0x00);
if(!argp) return(0x00);
b = (time_t*)(argp);
e = cal_sm_xe(l,b);
e = (e+(0x01+(~cal_sm_xe(g,b))));
r = cnt_tz_r(argp);
if(!r) return(e);
if(r<(0x00)) d = (0x01+(~d));
return(d+(e));
}
