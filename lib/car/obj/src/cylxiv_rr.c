# define CAR_H
# include "./../../../incl/config.h"

signed(__cdecl cylxiv_rr(signed char(*args),signed char(*argp))) {
auto signed r;
auto signed char *e = (CAR_H_BASE_LXIV);
if(!argp) return(0x00);
r = cara(args);
*argp = (signed char)(r);
if(!(*argp)) return(*argp);
if(!(0x00<(0x01+(~ordi(r,e))))) return(0x01+(cylxiv_rr(++args,++argp)));
return(cylxiv_rr(++args,argp));
}
