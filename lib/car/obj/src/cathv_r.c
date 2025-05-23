# define CAR_H
# include "./incl/config.h"

signed char **(__cdecl cathv_r(signed char(**argp))) {
auto signed r;
r = cnt_b(argp);
r++;
return(cathv_rr(argp,alloc(r*(sizeof(*argp)))));
}
