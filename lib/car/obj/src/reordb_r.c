# define CAR_H
# include "./../../../incl/config.h"

signed(__cdecl reordb_r(signed(args),signed(argp))) {
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
return(drft(r,reordb_r(args,argp)));
}
