# define CAR_H
# include "./incl/config.h"

signed char *(__cdecl catn_xe_r(signed char(**argp))) {
auto signed char *b;
if(!argp) return(0x00);
b = (*argp);
if(!b) return(b);
return(cata_xe(b,catn_xe_r(++argp)));
}
