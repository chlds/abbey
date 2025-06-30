# define CAT_H
# define TIME_H
# include "./../../../incl/config.h"

signed(__cdecl cal_di_to_new_moon_in_ll(signed(argt/*dm*/),signed(args),void(*argp))) {
auto signed r;
auto time_t e;
auto time_t d = (60*(60*(24)));
if(!(0x00<(argt))) return(0x00);
if(!argp) return(0x00);
e = (*(time_t*)(argp));
ADD(e,d);
r = cal_dm(args,&e);
if(!(0x00<(r))) return(0x00);
if(!(argt<(r))) return(0x01);
return(0x01+(cal_di_to_new_moon_in_ll(argt,args,&e)));
}
