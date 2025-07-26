# define CAR_H
# define ARC_H
# include "./../../../incl/config.h"

signed(__cdecl rde_r(signed(args),signed(argp))) {
auto signed r = (0x80);
if(!(0x00<(--argp))) return(0x00);
if(!(EQ(r,caract(rds(args))))) return(0x00);
return(0x01+(rde_r(args,argp)));
}
