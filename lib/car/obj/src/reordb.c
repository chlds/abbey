/* Synopsis

Ordering of bytes about endianness
*/


# define CAR_H
# include "./../../../incl/config.h"

signed(__cdecl reordb(signed(args),signed(argp))) {
auto signed r;
if(!(0x00<(argp))) return(args);
r = sizeof(args);
if(r<(argp)) argp = (r);
return(reordb_r(args,argp));
}
