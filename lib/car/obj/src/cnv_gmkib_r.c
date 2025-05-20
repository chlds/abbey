# define CAR_H
# include "./incl/config.h"

signed(__cdecl cnv_gmkib_r(signed char(*args),signed(__cdecl **argp)(signed char(*args)))) {
auto signed r;
auto signed(__cdecl *f)(signed char(*args));
if(!argp) return(0x00);
f = (*argp);
if(!f) return(0x00);
r = f(args);
if(r) return(r);
return(cnv_gmkib_r(args,++argp));
}
