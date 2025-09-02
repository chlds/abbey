# define CAR_H
# include "./../../../incl/config.h"

signed char **(__cdecl catt_v(signed char(*argp))) {
auto signed r;
AND(r,0x00);
OR(r,0x01);
return(catt_v_r(argp,(signed char**)(alloc(++r*(sizeof(argp))))));
}
