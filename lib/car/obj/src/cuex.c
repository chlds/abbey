# define CAR_H
# include "./incl/config.h"

signed(__cdecl cuex(signed char(*args),signed(__cdecl*argp)(signed char(*args)))) {
auto signed r;
if(argp) {
r = argp(args);
if(r) return(r);
}
return(cuex_r(args));
}
