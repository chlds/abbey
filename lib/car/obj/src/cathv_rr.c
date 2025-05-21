# define CAR_H
# include "./incl/config.h"

signed char **(__cdecl cathv_rr(signed char(**args),signed char(**argp))) {
auto signed r;
if(!args) return(argp);
AND(r,0x00);
--r;
*argp = cathy(*args);
if(!(*argp)) return(argp);
return(r+(cathv_rr(++args,++argp)));
}
