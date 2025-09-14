# define CAR_H
# include "./../../../incl/config.h"

signed(__cdecl cynonbrk_rr(signed char(*args),signed char(*argp))) {
if(!args) return(0x00);
if(!argp) return(0x00);
*argp = (*args);
if(!(*argp)) return(0x00);
if(EQ(CAR_H_CR,cara(args))) return(cynonbrk_rr(++args,argp));
if(EQ(CAR_H_LF,cara(args))) return(cynonbrk_rr(++args,argp));
return(0x01+(cynonbrk_rr(++args,++argp)));
}
