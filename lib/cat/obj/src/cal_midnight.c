# define CAT_H
# define TIME_H
# include "./../../../incl/config.h"

signed(__cdecl cal_midnight(signed(args),void(*argp))) {
auto signed r;
if(!argp) return(0x00);
r = cal_sm(args,argp);
if(r<(0x00)) return(0x00);
return(r+(cal_sm_xe(args,argp)));
}
