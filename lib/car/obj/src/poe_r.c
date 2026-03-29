# define CAR_H
# include "./../../../incl/config.h"

double(__cdecl poe_r(signed(args),signed(argp))) {
if(argp<(0x00)) argp = (0x01+(~argp));
return(poe_rr(args,argp));
}
