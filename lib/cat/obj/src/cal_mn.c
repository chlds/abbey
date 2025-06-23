# define CAT_H
# define TIME_H
# include "./../../../incl/config.h"

signed(__cdecl cal_mn(signed(args),void(*argp))) {
auto struct tm *t;
t = (struct tm*)(cal_te(args,argp));
if(!t) return(~0x00);
return(R(tm_min,*t));
}
