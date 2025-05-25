# define CAR_H
# include "./incl/config.h"

signed char *(__cdecl cv_hex(signed(arg))) {
auto signed r;
r = bpb();
return(cv_hex_r(arg,r*(sizeof(arg))));
}
