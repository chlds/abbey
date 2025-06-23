# define CAT_H
# define TIME_H
# include "./../../../incl/config.h"

signed(__cdecl cal_yr(signed(args),void(*argp))) {
auto struct tm *t;
auto signed e = (1900);
t = (struct tm*)(cal_te(args,argp));
if(!t) return(~0x00);
return(e+(R(tm_year,*t)));
}
