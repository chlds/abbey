# define CAR_H
# include "./../../../incl/config.h"

signed *(__cdecl cyne_u(signed(*args),signed(argp))) {
if(!args) return(args);
if(argp<(0x00)) AND(argp,0x00);
return(cynth_u(--argp,args,(signed*)(alloc(++argp*(sizeof(*args))))));
}
