# define CAR_H
# include "./../../../incl/config.h"

signed(__cdecl caras(signed short(*argp))) {
return(!argp?0x00:dw(*argp));
}
