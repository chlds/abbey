# define CAR_H
# define CAT_H
# define TIME_H
# include "./../../../incl/config.h"

signed char *(__cdecl clck_m_tz(signed(args),void(*argp))) {
auto signed char *b;
auto time_t e;
auto signed char *a = (CAT_H_SPACE);
b = clck_m(args,argp);
if(!b) return(b);
e = cnt_tz(argp);
return(cathe(b,catha(a,cv_tz_utc_xe(cv_tz(&e)))));
}
