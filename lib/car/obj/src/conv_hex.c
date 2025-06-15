# define CAR_H
# include "./../../../incl/config.h"

signed(__cdecl conv_hex(signed char(*argp))) {
return(conv(0x10,argp));
}
