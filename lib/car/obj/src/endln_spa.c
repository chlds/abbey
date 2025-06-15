# define CAR_H
# include "./../../../incl/config.h"

signed(__cdecl endln_spa(signed char(*argp))) {
auto signed char *b;
auto signed r;
AND(r,0x00);
b = reord(argp);
if(!(any_ofspa(b))) OR(r,0x01);
rlse(b);
b = (0x00);
return(r);
}
