# define CAR_H
# include "./incl/config.h"

signed(__cdecl conv_nib(signed char(*argp))) {
auto signed r;
r = cnv_nib(argp);
rlse(argp);
argp = (0x00);
return(r);
}
