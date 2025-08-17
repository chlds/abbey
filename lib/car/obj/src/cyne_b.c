# define CAR_H
# include "./../../../incl/config.h"

signed char **(__cdecl cyne_b(signed char(**args),signed(argp))) {
if(!args) return(args);
if(!(0x00<(argp))) return(0x00);
argp++;
return(cynk_b(--argp,args,(signed char**)(alloc(argp*(sizeof(*args))))));
}
