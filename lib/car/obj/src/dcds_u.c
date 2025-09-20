# define CAR_H
# include "./../../../incl/config.h"

signed char *(__cdecl dcds_u(signed(*argp))) {
auto signed char *b;
b = dcd_u(*argp);
if(!b) return(b);
return(cathe(b,dcds_u(++argp)));
}
