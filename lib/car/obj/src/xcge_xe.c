# define CAR_H
# include "./../../../incl/config.h"

signed(__cdecl xcge_xe(signed(**args),signed(**argp))) {
auto signed *b;
if(!args) return(0x00);
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
if(!(*args)) return(0x00);
b = (*args);
*args = (*argp);
*argp = (b);
b = (0x00);
return(0x01);
}
