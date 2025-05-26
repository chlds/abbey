# define CAR_H
# include "./incl/config.h"

signed(__cdecl conv_dec(signed char(*argp))) {
auto signed r;
r = cnv_dec(argp);
rlse(argp);
argp = (0x00);
return(r);
}
