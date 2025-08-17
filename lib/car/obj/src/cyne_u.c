# define CAR_H
# include "./../../../incl/config.h"

signed *(__cdecl cyne_u(signed(*args),signed(argp))) {
if(!args) return(args);
if(!(0x00<(argp))) return(0x00);
argp++;
return(cynk_u(--argp,args,(signed*)(alloc(argp*(sizeof(*args))))));
}
