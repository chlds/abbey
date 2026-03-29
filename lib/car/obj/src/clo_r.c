# define CAR_H
# include "./../../../incl/config.h"

signed(__cdecl clo_r(signed(args),signed(argp))) {
if(!(args<(0x00))) return(argp);
if(!(0x00<(argp))) return(argp);
SHL(args,0x01);
return(clo_r(args,--argp));
}
