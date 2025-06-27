# define CAR_H
# define CAT_H
# define TIME_H
# include "./../../../incl/config.h"

signed char *(__cdecl cv_tz_mn(void(*argp))) {
auto signed char *b;
auto signed r;
auto signed d = (0x02);
b = (0x00);
if(!argp) return(b);
r = cnt_tz_mn(argp);
if(!r) return(b);
return(cv(d,r));
}
