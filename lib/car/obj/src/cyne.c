# define CAR_H
# include "./../../../incl/config.h"

signed char *(__cdecl cyne(signed char(*args),signed(argp))) {
if(!args) return(args);
if(argp<(0x00)) AND(argp,0x00);
return(cynth(--argp,args,(signed char*)(alloc(++argp*(sizeof(*args))))));
}
