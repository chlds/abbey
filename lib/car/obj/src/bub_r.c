# define CAR_H
# include "./incl/config.h"

signed(__cdecl bub_r(signed(*args),signed(argp))) {
auto signed r;
if(!(0x00<(--argp))) return(0x00);
if(!args) return(0x00);
if(!(0x01+(args))) return(0x00);
r = (*(0x01+(args)));
if(r<(*args)) {
if(!(xcge(args,&r))) return(0x00);
*(0x01+(args)) = (r);
}
return(0x01+(bub_r(++args,argp)));
}
