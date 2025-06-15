# define CAR_H
# define STDARG_H
# include "./../../../incl/config.h"

signed(__cdecl lcm_xe(signed arg,...)) {
return(lcm_xe_r(&arg,arg));
}
