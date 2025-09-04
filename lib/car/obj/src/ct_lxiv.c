# define CAR_H
# include "./../../../incl/config.h"

signed(__cdecl ct_lxiv(signed char(*argp))) {
auto signed r;
auto signed q = (CAR_H_EQ);
auto signed char *e = (CAR_H_BASE_LXIV);
r = cara(argp);
if(!r) return(r);
if(EQ(q,r)) return(0x01+(ct_lxiv(++argp)));
if(!(0x00<(0x01+(~ordi(r,e))))) return(0x01+(ct_lxiv(++argp)));
return(ct_lxiv(++argp));
}
