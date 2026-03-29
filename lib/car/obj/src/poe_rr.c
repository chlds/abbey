# define CAR_H
# include "./../../../incl/config.h"

double(__cdecl poe_rr(signed(args),signed(argp))) {
if(!(0x00<(argp))) return(0x01);
return(args*(poe_rr(args,--argp)));
}
