# define CAR_H
# include "./incl/config.h"

signed char **(__cdecl cathv_rr(signed char(**args),signed char(**argp))) {
auto signed r;
if(!argp) return(argp);
*argp = (0x00);
if(!args) return(argp);
*argp = cathy(*args);
if(!(*argp)) return(argp);
return(dec_b(cathv_rr(++args,++argp)));
}
