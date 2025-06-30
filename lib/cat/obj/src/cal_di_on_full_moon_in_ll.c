# define CAR_H
# define CAT_H
# include "./../../../incl/config.h"

signed char *(__cdecl cal_di_on_full_moon_in_ll(signed(args),void(*argp))) {
auto signed char *b;
auto signed r;
auto signed i = (CAT_H_IDVS_ON_FULL_MOON);
auto signed n = (CAT_H_NONAE_ON_FULL_MOON);
auto signed k = (CAT_H_KALENDAE);
auto signed char *a = (CAT_H_WORD_SEPARATOR);
auto signed char *(__cdecl*c)(void);
auto signed char *(__cdecl*(e[]))(void) = {
cal_null,
cal_kalendis,
cal_sextvm,
cal_qvintvm,
cal_qvartvm,
cal_tertivm,
cal_pridie,
cal_nonis,
cal_octavvm,
cal_septimvm,
cal_sextvm,
cal_qvintvm,
cal_qvartvm,
cal_tertivm,
cal_pridie,
cal_idibvs,
0x00,
};
b = (0x00);
if(!argp) return(b);
r = cal_dm(args,argp);
if(!(0x01+(r))) return(b);
if(i<(r)) return(cal_di_on_new_moon_in_ll(args,argp));
r = (r%(cnt_e_xxe((void*(__cdecl**)(void*))(e))));
if(!r) return(b);
c = (*(r+(e)));
b = c();
if(EQ(k,r)) return(b);
if(EQ(n,r)) return(b);
if(EQ(i,r)) return(b);
if(r<(n)) b = cathe(b,catha(a,cal_nonas()));
if(EQ(r,n+(~0x00))) return(b);
if(r<(n)) return(catne(b,catna(a,catne(cal_diem(),catna(a,cal_ante())))));
b = cathe(b,catha(a,cal_idvs()));
if(EQ(r,i+(~0x00))) return(b);
return(catne(b,catna(a,catne(cal_diem(),catna(a,cal_ante())))));
}
