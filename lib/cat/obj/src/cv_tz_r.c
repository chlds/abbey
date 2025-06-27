# define CAT_H
# define TIME_H
# include "./../../../incl/config.h"

signed char *(__cdecl cv_tz_r(void(*argp))) {
auto time_t e;
e = (*(time_t*)(argp));
if(e<(0x00)) e = (0x01+(~e));
if(e<(0x00)) AND(e,0x00);
argp = (&e);
return(cv_tz_rr(argp,cv_tz_hr(argp)));
}
