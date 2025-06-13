# define CAR_H
# include "./incl/config.h"

signed(__cdecl ct_lxiv(signed char(*argp))) {
auto signed r;
r = cara(argp);
if(!r) return(r);
if(EQ(CAR_H_EQ,r)) return(0x01+(ct_lxiv(++argp)));
r = ord(r,CAR_H_BASE_LXIV);
if(r<(ct(CAR_H_BASE_LXIV))) return(0x01+(ct_lxiv(++argp)));
return(ct_lxiv(++argp));
}
