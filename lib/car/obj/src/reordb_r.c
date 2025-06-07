# define CAR_H
# include "./incl/config.h"

signed(__cdecl reordb_r(signed(args),signed(argp))) {
auto signed r;
auto signed b;
if(!(0x00<(argp%(0x01+(sizeof(argp)))))) return(0x00);
b = sizeof(argp);
b = (b+(0x01+(~(argp/(0x01+(sizeof(argp)))))));
--b;
b = (b*(bpb()));
r = (args);
SHR(r,b);
argp = (argp+(sizeof(argp)));
return(drft(r,reordb_r(args,argp)));
}
