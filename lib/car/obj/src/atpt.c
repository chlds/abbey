# define CAR_H
# define ARC_H
# include "./../../../incl/config.h"

signed(__cdecl atpt(signed(args),signed(argp))) {
if(!(0x00<(argp))) return(0x00);
if(!(rde(args))) return(0x00);
return(0x01+(atpt(args,--argp)));
}
