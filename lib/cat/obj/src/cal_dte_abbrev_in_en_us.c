# define CAR_H
# define CAT_H
# include "./../../../incl/config.h"

signed char *(__cdecl cal_dte_abbrev_in_en_us(signed(args),void(*argp))) {
auto signed char *b;
auto signed char *a = (CAT_H_SPACE);
b = cal_dm_abbrev_in_en_us(cal_dm(args,argp));
return(catne(b,catna(a,cal_mo_abbrev_in_en_us(cal_mo(args,argp)))));
}
