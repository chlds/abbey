# define CAR_H
# include "./incl/config.h"

signed**(__cdecl cath_d_rr(signed(argt),signed(*args),signed(**argp))) {
auto signed r;
if(!argp) return(argp);
*argp = (0x00);
if(!args) return(argp);
if(!(0x00<(argt))) return(argp);
*argp = (signed*)(alloc(0x01*(sizeof(*args))));
if(!(*argp)) return(argp);
**argp = (*args);
r = (sizeof(args));
args = (args+(r/(sizeof(*args))));
return(dec_d(cath_d_rr(--argt,args,++argp)));
}
