/* Synopsis

Argument argp where fn. ckhn comes in
*/


# define CAR_H
# define CAT_H
# define TIME_H
# include "./../../../incl/config.h"

signed char *(__cdecl clcks_m_tz(signed(argt/*crown*/),signed(args),void(*argp))) {
auto signed char *b;
auto time_t e;
auto signed char *a = (CAT_H_SPACE);
b = clcks_m(args,argp);
if(!b) return(b);
e = cnt_tz(argp);
ADD(e,(time_t)(grt(argp,argt)));
return(cathe(b,catha(a,cv_tz_utc_xe(cv_tz(&e)))));
}
