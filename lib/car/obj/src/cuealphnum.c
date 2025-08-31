# define CAR_H
# include "./../../../incl/config.h"

signed(__cdecl cuealphnum(signed char(*argp))) {
auto signed char *b;
auto signed r;
if(!(lt(argp))) return(0x00);
b = (CAR_H_ALPHANUMERICALS);
r = ord(cara(argp),b);
if(!(r<(ct(b)))) return(0x00);
return(0x01+(cuealphnum(argp+(lt(argp)))));
}
