# define CAR_H
# include "./../../../incl/config.h"

signed(__cdecl cuemb_xe(signed char(*argp))) {
if(!(lt(argp))) return(~0x00);
if(cuemb(argp)) return(0x00);
return(alte(0x01,cuemb_xe(argp+(lt(argp)))));
}
