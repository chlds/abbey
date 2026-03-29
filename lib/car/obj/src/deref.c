# define CAR_H
# include "./../../../incl/config.h"

signed(__cdecl deref(signed char(*argp))) {
return(argp?*argp:0x00);
}
