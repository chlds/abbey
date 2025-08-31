# define CAR_H
# include "./../../../incl/config.h"

signed(__cdecl cuealph_xe(signed char(*argp))) {
if(!(lt(argp))) return(~0x00);
if(cuealph(argp)) return(0x00);
return(alte(0x01,cuealph_xe(argp+(lt(argp)))));
}
