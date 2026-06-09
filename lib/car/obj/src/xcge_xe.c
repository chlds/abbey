# define CAR_H
# include "./../../../incl/config.h"

signed(__cdecl xcge_xe(signed(**args),signed(**argp))) {
auto signed *b;
if(!derefr_xe(args)) return(0x00);
if(!derefr_xe(argp)) return(0x00);
b = (*args);
*args = (*argp);
*argp = (b);
b = (0x00);
return(0x01);
}
