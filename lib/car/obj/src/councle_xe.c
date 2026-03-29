# define CAR_H
# include "./../../../incl/config.h"

signed(__cdecl councle_xe(signed char(*args),signed(argp))) {
auto signed r;
r = coh(args);
if(!r) return(argp);
ADD(args,r);
ADD(argp,r);
return(councle_xe(args,argp));
}
