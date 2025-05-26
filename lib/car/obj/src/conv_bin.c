# define CAR_H
# include "./incl/config.h"

signed(__cdecl conv_bin(signed char(*argp))) {
auto signed r;
r = cnv_bin(argp);
rlse(argp);
argp = (0x00);
return(r);
}
