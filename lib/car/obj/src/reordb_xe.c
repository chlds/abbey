# define CAR_H
# include "./incl/config.h"

signed short(__cdecl reordb_xe(signed short(args),signed(argp))) {
auto signed r;
if(!(0x00<(argp))) return(args);
r = sizeof(args);
if(r<(argp)) argp = (r);
return(reordb_xe_r(args,argp));
}
