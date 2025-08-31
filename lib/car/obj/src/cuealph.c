# define CAR_H
# include "./../../../incl/config.h"

signed(__cdecl cuealph(signed char(*argp))) {
auto signed char *b;
auto signed r;
if(!(lt(argp))) return(0x00);
b = (CAR_H_LETTERS);
r = ord(cara(argp),b);
if(!(r<(ct(b)))) return(0x00);
return(0x01+(cuealph(argp+(lt(argp)))));
}
