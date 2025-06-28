# define CAR_H
# define CAT_H
# define TIME_H
# include "./../../../incl/config.h"

signed(__cdecl ctdn_dw(signed(argt),signed(args),void(*argp))) {
auto signed r;
auto time_t w = (7);
r = cal_dw(args,argp);
if(!(0x01+(r))) return(0x01+(r));
if(argt<(0x00)) AND(argt,0x00);
argt = (argt%(w));
r = (r+(w+(0x01+(~argt))));
return(r%(w));
}
