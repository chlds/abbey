# define CAR_H
# include "./../../../incl/config.h"

signed char **(__cdecl cyne_v(signed char(**args),signed(argp))) {
if(!args) return(args);
if(argp<(0x00)) AND(argp,0x00);
return(cynth_v(--argp,args,(signed char**)(alloc(++argp*(sizeof(*args))))));
}
