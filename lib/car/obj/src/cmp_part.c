# define CAR_H
# include "./../../../incl/config.h"

signed(__cdecl cmp_part(signed char(*args),signed char(*argp))) {
auto signed r;
r = ct(argp);
if(r<(ct(args))) return(cmpe_part(argp,args));
return(cmpe_part(args,argp));
}
