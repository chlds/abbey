# define CAR_H
# define CAT_H
# define TIME_H
# include "./../../../incl/config.h"

signed char *(__cdecl cv_tz_hr(void(*argp))) {
auto signed char *b;
auto signed r;
auto signed d = (0x01);
b = (0x00);
if(!argp) return(b);
r = cnt_tz_hr(argp);
if(!r) return(b);
return(cv(d,r));
}
