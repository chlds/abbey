# define CAR_H
# include "./../../../incl/config.h"

signed char *(__cdecl cv_upp(signed char(*argp))) {
auto signed char *b;
if(!argp) return(argp);
b = cathal_xe(cv_upper(*argp));
if(!b) b = cas(argp);
if(!deref(b)) return(b);
return(cathe(b,cv_upp(argp+(counc(b)))));
}
