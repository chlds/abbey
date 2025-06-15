/* Synopsis

Encoding in BASE64 as referenced in RFC #1421
*/


# define CAR_H
# include "./../../../incl/config.h"

signed char *(__cdecl ecd_lxiv(signed char(*args),signed(argp))) {
auto signed char *b;
b = (0x00);
if(!(0x00<(argp))) return(b);
b = ecd_xxiv_lxiv(argp,args);
if(EQ(argp,sze_orig_ante_lxiv(b))) return(b);
rlse(b);
b = (0x00);
return(b);
}
