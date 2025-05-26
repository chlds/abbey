# define CAR_H
# include "./incl/config.h"

signed(__cdecl conv_hex(signed char(*argp))) {
auto signed r;
r = cnv_hex(argp);
rlse(argp);
argp = (0x00);
return(r);
}
