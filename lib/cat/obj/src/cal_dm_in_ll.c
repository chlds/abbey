# define CAR_H
# define CAT_H
# include "./../../../incl/config.h"

signed char *(__cdecl cal_dm_in_ll(signed(args),void(*argp))) {
auto signed char *b;
auto signed r;
auto signed char *(__cdecl*c)(signed(args),void(*argp));
auto signed char *(__cdecl*(e[]))(signed(args),void(*argp)) = {
cal_di_on_full_moon_in_ll,
cal_di_on_hollow_moon_in_ll,
0x00,
};
b = (0x00);
if(!argp) return(b);
r = cal_mo(args,argp);
if(!(0x01+(r))) return(b);
r = cal_on_moon_in_ll(r);
if(!r) return(b);
r = (r%(cnt_e_xxe((void*(__cdecl**)(void*))(e))));
c = (*(r+(e)));
return(c(args,argp));
}
