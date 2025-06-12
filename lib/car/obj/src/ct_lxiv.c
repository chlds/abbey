# define CAR_H
# include "./incl/config.h"

signed(__cdecl ct_lxiv(signed char(*argp))) {
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
if(EQ(CAR_H_EQ,*argp)) return(0x01+(ct_lxiv(++argp)));
if(!(any_oflxiv(argp))) return(0x01+(ct_lxiv(++argp)));
return(ct_lxiv(++argp));
}
