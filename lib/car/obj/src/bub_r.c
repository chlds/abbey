# define CAR_H
# include "./incl/config.h"

signed(__cdecl bub_r(signed(args),signed(*argp))) {
auto signed r;
if(!(0x00<(--args))) return(0x00);
if(!argp) return(0x00);
if(!(0x01+(argp))) return(0x00);
r = (*(0x01+(argp)));
if(r<(*argp)) {
if(!(xcge(argp,&r))) return(0x00);
*(0x01+(argp)) = (r);
}
return(0x01+(bub_r(args,++argp)));
}
