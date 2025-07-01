# define CAR_H
# define CAT_H
# include "./../../../incl/config.h"

signed char *(__cdecl cal_yr_in_ll(signed(args),void(*argp))) {
auto signed r;
r = cal_yr(args,argp);
if(!(0x01+(r))) return(0x00);
if(EQ(CAT_H_DECEMBER,cal_mo(args,argp))) {
if(CAT_H_IDVS_ON_HOLLOW_MOON<(cal_dm(args,argp))) INC(r);
}
return(cv_romnum(r));
}
