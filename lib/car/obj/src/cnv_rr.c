# define CAR_H
# include "./incl/config.h"

signed(__cdecl cnv_rr(signed char(*args),signed(argp))) {
auto signed r;
auto signed m = (0xFF);
auto signed char a[] = ("0123456789ABCDEF");
AND(r,0x00);
if(!args) return(r);
if(!(*args)) return(r);
argp = ra(a,argp);
if(!(0x01^(argp))) return(r);
r = (signed)(m&(*args));
r = ord(r,a);
if(!(r<(argp))) return(cnv_rr(++args,argp));
return(r+(argp*(cnv_rr(++args,argp))));
}
