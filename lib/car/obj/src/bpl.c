/* Synopsis

Bytes per letter
*/


# define CAR_H
# include "./../../../incl/config.h"

signed(__cdecl bpl(signed char(*args),signed(argp))) {
auto signed r;
if(!(0x00<(argp))) return(0x00);
r = lt(args);
args = (args+(r));
return(r+(bpl(args,--argp)));
}
