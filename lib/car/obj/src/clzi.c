# define CAR_H
# define LIMITS_H
# include "./../../../incl/config.h"

signed(__cdecl clzi(signed(arg))) {
auto signed r;
r = (CHAR_BIT*(sizeof(signed)));
return(r+(0x01+(~clz_r(arg,r))));
}
