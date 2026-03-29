# define CAR_H
# define LIMITS_H
# include "./../../../incl/config.h"

signed(__cdecl clz(signed(arg))) {
auto signed r;
r = sizeof(signed);
SHL(arg,CHAR_BIT*(--r));
return(CHAR_BIT+(0x01+(~clz_r(arg,CHAR_BIT))));
}
