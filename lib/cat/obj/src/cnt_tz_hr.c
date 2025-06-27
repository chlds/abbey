# define CAR_H
# define CAT_H
# define TIME_H
# include "./../../../incl/config.h"

signed(__cdecl cnt_tz_hr(void(*argp))) {
auto signed r;
auto time_t e;
auto time_t x = (CAT_H_SCALE);
auto time_t h = (60*(60));
auto time_t hd = (24);
AND(r,0x00);
if(!argp) return(r);
e = (*(time_t*)(argp));
e = (e/(h));
e = (e%(x*(hd)));
r = (signed)(e&(mas(sizeof(signed))));
return(r);
}
