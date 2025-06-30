# define CAR_H
# define CAT_H
# include "./../../../incl/config.h"

signed char *(__cdecl cal_mo_in_ll(signed(args),void(*argp))) {
auto signed char *b;
auto signed d;
auto signed m;
auto signed r;
auto signed char *(__cdecl*c)(signed(args),signed(argp));
auto signed char *(__cdecl*(e[]))(signed(args),signed(argp)) = {
cal_january_in_ll,
cal_february_in_ll,
cal_march_in_ll,
cal_april_in_ll,
cal_may_in_ll,
cal_june_in_ll,
cal_july_in_ll,
cal_august_in_ll,
cal_september_in_ll,
cal_october_in_ll,
cal_november_in_ll,
cal_december_in_ll,
0x00,
};
b = (0x00);
if(!argp) return(b);
d = cal_dm(args,argp);
if(!(0x00<(d))) return(b);
m = cal_mo(args,argp);
if(!(0x01+(m))) return(b);
r = cal_on_carryover_in_ll(d,m);
if(r) INC(m);
m = (m%(cnt_e_xxe((void*(__cdecl**)(void*))(e))));
c = (*(m+(e)));
return(c(d,r));
}
