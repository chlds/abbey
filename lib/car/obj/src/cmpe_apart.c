# define CAR_H
# include "./incl/config.h"

signed(__cdecl cmpe_apart(signed char(*args),signed char(*argp))) {
auto signed r;
AND(r,0x00);
if(!argp) return(r);
if(!args) return(r);
r = cara(argp);
if(!r) return(r+(0x01+(~(cara(args)))));
if(!(cmpe_part(args,argp))) return(0x00);
return(cmpe_apart(args,++argp));
}
