/* Synopsis

Convert into a double word
*/


# define CAR_H
# include "./../../../incl/config.h"

signed(__cdecl conv_xe(signed(args),signed char(*argp))) {
auto signed r;
r = cnv_xe(args,argp);
argp = annih(argp);
return(r);
}
