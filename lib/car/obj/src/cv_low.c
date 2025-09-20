# define CAR_H
# include "./../../../incl/config.h"

signed char *(__cdecl cv_low(signed char(*argp))) {
auto signed char *b;
if(!argp) return(argp);
b = cathal_xe(cv_lower(*argp));
if(!b) b = cas(argp);
if(!b) return(b);
if(!(*b)) return(b);
return(cathe(b,cv_low(argp+(ct(b)))));
}
