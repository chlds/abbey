# define CAR_H
# define CAT_H
# include "./../../../incl/config.h"

signed char *(__cdecl cal_dw_in_latn(signed(args),signed char(**argp))) {
auto signed char *b;
auto signed char *a = (CAT_H_WORD_SEPARATOR);
auto signed char *d = (CAT_H_DAY_NM_SG_IN_LL);
b = (0x00);
if(args<(0x00)) return(b);
if(!(EQ(CAT_H_DAYS_OF_THE_WEEK,cnt_v(argp)))) return(b);
return(catha(d,catha(a,cathy(*(argp+(args%(CAT_H_DAYS_OF_THE_WEEK)))))));
}
