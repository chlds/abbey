# define CAR_H
# define STDARG_H
# include "./../../../incl/config.h"

signed(__cdecl cnt_xe(signed char *argp,...)) {
if(!argp) return(0x00);
return(cnt_xe_r(&argp));
}
