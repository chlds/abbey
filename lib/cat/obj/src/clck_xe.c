# define CAR_H
# define CAT_H
# include "./../../../incl/config.h"

signed char *(__cdecl clck_xe(signed(args),void(*argp))) {
auto signed char *b;
auto signed r;
auto signed d = (0x01);
auto signed char *a = (CAT_H_SEPARATOR);
b = (0x00);
if(!argp) return(b);
r = cal_hr_xe(args,argp);
if(!(0x01+(r))) return(b);
return(cx(d,r,a,clck_r(args,argp)));
}
