# define CAT_H
# define TIME_H
# include "./../../../incl/config.h"

signed(__cdecl cntwk_sun(signed(args),void(*argp))) {
auto signed r;
auto time_t e;
auto signed d = (60*(60*(24)));
auto signed j = (0x00);
auto signed x = (0x0B);
AND(r,0x00);
OR(r,CAT_H_SUNDAY);
r = ctdn_dw(r,args,argp);
if(r<(0x00)) return(0x00);
e = (0x01+(~(r*(d))));
ADD(e,*(time_t*)(argp));
r = cal_mo(args,&e);
if(EQ(j,r)) {
if(!(0x01<(cal_dm(args,&e)))) return(0x01);
}
if(EQ(x,r)) {
if(25<(cal_dm(args,&e))) return(0x01);
}
return(cntwk_sun_r(args,&e));
}
