# define CAR_H
# include "./incl/config.h"

signed(__cdecl cmp_apart(signed char(*args),signed char(*argp))) {
auto signed r;
r = ct(argp);
if(r<(ct(args))) return(cmpe_apart(argp,args));
return(cmpe_apart(args,argp));
}
