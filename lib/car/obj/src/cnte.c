# define CAR_H
# include "./../../../incl/config.h"

signed(__cdecl cnte(signed char(*args),signed char(*argp))) {
auto signed r;
r = cara(args);
if(!r) return(r);
if(!(0x00<(0x01+(~ordi(r,argp))))) return(0x01+(cnte(++args,argp)));
return(cnte(++args,argp));
}
