# define CAT_H
# define TIME_H
# include "./../../../incl/config.h"

signed(__cdecl cnt_tz_r(void(*argp))) {
auto time_t *b;
auto signed yr;
auto signed mo;
auto signed dm;
auto signed l = (0x01);
auto signed g = (0x00);
if(!argp) return(0x00);
b = (time_t*)(argp);
dm = cal_dm(l,b);
mo = cal_mo(l,b);
yr = cal_yr(l,b);
if(!(EQ(yr,cal_yr(g,b)))) return(yr+(0x01+(~cal_yr(g,b))));
if(!(EQ(mo,cal_mo(g,b)))) return(mo+(0x01+(~cal_mo(g,b))));
if(!(EQ(dm,cal_dm(g,b)))) return(dm+(0x01+(~cal_dm(g,b))));
return(0x00);
}
