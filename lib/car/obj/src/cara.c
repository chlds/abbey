# define CAR_H
# include "./../../../incl/config.h"

signed(__cdecl cara(signed char(*argp))) {
return(!argp?0x00:db(*argp));
}
