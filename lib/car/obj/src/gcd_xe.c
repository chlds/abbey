# define CAR_H
# define STDARG_H
# include "./../../../incl/config.h"

signed(__cdecl gcd_xe(signed arg,...)) {
return(gcd_xe_r(&arg,arg));
}
