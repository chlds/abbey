# define CAR_H
# define ARC_H
# include "./../../../incl/config.h"

signed(__cdecl wrs(signed(args),signed char(*argp))) {
auto signed q;
auto signed r;
if(args<(0x00)) return(0x00);
r = writes(args,argp,ct(argp));
if(!(0x00<(r))) return(0x00);
return(r);
}
