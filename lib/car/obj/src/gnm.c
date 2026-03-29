# define CAR_H
# define LIMITS_H
# include "./../../../incl/config.h"

signed(__cdecl gnm(signed(arg))) {
auto signed r;
AND(r,0x00);
NOT(r);
arg = (arg*(CHAR_BIT));
if(!(0x00<(arg))) return(~0x00);
return(~(r<<(arg)));
}
