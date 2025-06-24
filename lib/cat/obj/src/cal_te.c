# define CAT_H
# define TIME_H
# include "./../../../incl/config.h"

void *(__cdecl cal_te(signed(args),void(*argp))) {
auto time_t *b;
auto struct tm *(__sysv*c)(const time_t(*argp));
auto struct tm *(__sysv**d)(const time_t(*argp));
auto struct tm *(__sysv*(e[]))(const time_t(*argp)) = {
localtime,
gmtime,
0x00,
};
if(!argp) return(argp);
b = (time_t*)(argp);
d = (e);
if(!args) d++;
c = (*d);
return(c(b));
}
