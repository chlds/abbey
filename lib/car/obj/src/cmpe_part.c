# define CAR_H
# include "./incl/config.h"

signed(__cdecl cmpe_part(signed char(*args),signed char(*argp))) {
auto signed r;
auto signed mask = (0xFF);
AND(r,0x00);
if(!argp) return(r);
if(!args) return(r);
r = (signed)(mask&(*args));
if(!r) return(r);
if(r^(signed)(mask&(*argp))) return(r+(0x01+(~(signed)(mask&(*argp)))));
return(cmpe_part(++args,++argp));
}
