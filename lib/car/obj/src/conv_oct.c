# define CAR_H
# include "./incl/config.h"

signed(__cdecl conv_oct(signed char(*argp))) {
auto signed r;
r = cnv_oct(argp);
rlse(argp);
argp = (0x00);
return(r);
}
