/* Synopsis

Permission
*/


# define CAR_H
# include "./../../../incl/config.h"

signed(__cdecl xt_pm(signed char(*argp))) {
auto signed r;
r = cnv_oct(argp);
if(r) return(r);
return(xt_pm_r(argp));
}
