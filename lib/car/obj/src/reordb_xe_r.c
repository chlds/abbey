# define CAR_H
# include "./incl/config.h"

signed short(__cdecl reordb_xe_r(signed short(args),signed(argp))) {
auto signed r;
auto signed b;
if(!(argp%(0x01+(sizeof(args))))) return(0x00);
b = sizeof(args);
b = (b+(0x01+(~(argp/(0x01+(sizeof(args)))))));
--b;
b = (b*(bpb()));
r = (args);
SHR(r,b);
argp = (argp+(sizeof(args)));
return(drft(r,reordb_xe_r(args,argp)));
}
