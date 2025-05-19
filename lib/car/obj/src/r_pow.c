# define CAR_H
# include "./incl/config.h"

signed(__cdecl r_pow(signed(args),signed(argp))) {
if(!(0x00<(argp))) return(0x01);
return(args*(r_pow(args,--argp)));
}
