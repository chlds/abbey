# define CAR_H
# define CAT_H
# define TIME_H
# include "./../../../incl/config.h"

signed char *(__cdecl cv_tz(void(*argp))) {
auto signed char **w;
auto signed char *b;
auto signed r;
auto time_t e;
auto signed char n[] = ("-");
auto signed char p[] = ("+");
auto signed char *(a[]) = {
n,
p,
0x00,
};
b = (0x00);
if(!argp) return(b);
e = (*(time_t*)(argp));
w = (a);
if(!(e<(0x00))) w++;
b = (*w);
return(catha(b,cv_tz_r(argp)));
}
