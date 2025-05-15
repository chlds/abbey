# define CAR_H
# include "./incl/config.h"

signed(__cdecl bub(signed(args),signed(*argp))) {
auto signed r;
r = bub_r(args,argp);
if(r^(--args)) return(0x00);
return(0x01+(bub(args,argp)));
}
