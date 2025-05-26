# define CAR_H
# include "./incl/config.h"

signed(__cdecl conv_nib(signed char(*argp))) {
return(conv(0x04,argp));
}
