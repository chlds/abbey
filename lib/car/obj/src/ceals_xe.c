# define CAR_H
# include "./../../../incl/config.h"

signed(__cdecl ceals_xe(signed short(*args),signed(argp))) {
if(!derefs(args)) return(argp);
*args = (0x00);
return(ceals_xe(++args,++argp));
}
