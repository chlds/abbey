# define CAR_H
# include "./incl/config.h"

signed(__cdecl cmpe(signed char(*args),signed char(*argp))) {
auto signed r;
AND(r,0x00);
if(!argp) return(r);
if(!args) return(r);
r = cara(args);
if(r^(cara(argp))) return(r+(0x01+(~(cara(argp)))));
if(!r) return(r);
return(cmpe(++args,++argp));
}
