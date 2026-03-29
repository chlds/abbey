# define CAR_H
# include "./../../../incl/config.h"

void(__cdecl*derefe_xe(void(__cdecl**argp)(void*)))(void*) {
return(argp?*argp:0x00);
}
