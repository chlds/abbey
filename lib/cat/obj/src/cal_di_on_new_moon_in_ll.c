# define CAR_H
# define CAT_H
# include "./../../../incl/config.h"

signed char *(__cdecl cal_di_on_new_moon_in_ll(signed(args),void(*argp))) {
auto signed char *b;
auto signed r;
auto signed s = (CAT_H_SEPTIMVM_DECIMVM);
auto signed t = (CAT_H_TERTIVM_DECIMVM);
auto signed char *a = (CAT_H_WORD_SEPARATOR);
auto signed char *(__cdecl*c)(void);
auto signed char *(__cdecl**d)(void);
auto signed char *(__cdecl*(e[]))(void) = {
cal_null,
cal_vndevicesimvm,
cal_dvodevicesimvm,
cal_septimvm,
cal_sextvm,
cal_qvintvm,
cal_qvartvm,
cal_tertivm,
cal_dvodecimvm,
cal_vndecimvm,
cal_decimvm,
cal_nonvm,
cal_octavvm,
cal_septimvm,
cal_sextvm,
cal_qvintvm,
cal_qvartvm,
cal_tertivm,
cal_pridie,
0x00,
};
b = (0x00);
if(!argp) return(b);
r = cal_dm(args,argp);
if(!(0x00<(r))) return(b);
r = cal_di_to_new_moon_in_ll(r,args,argp);
if(!r) return(b);
b = cal_kalendas();
d = (e+(cnt_e_xxe((void*(__cdecl**)(void*))(e))));
--d;
c = (*d);
if(EQ(0x01,r)) return(catne(b,catna(a,c())));
if(!(r<(t))) {
if(!(s<(r))) b = catne(b,catna(a,cal_decimvm()));
}
r = (0x01+(~r));
r = (r+(cnt_e_xxe((void*(__cdecl**)(void*))(e))));
if(!(0x00<(r))) return(b);
r = (r%(cnt_e_xxe((void*(__cdecl**)(void*))(e))));
c = (*(r+(e)));
return(catne(b,catna(a,catne(c(),catna(a,catne(cal_diem(),catna(a,cal_ante())))))));
}
