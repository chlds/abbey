# define CAR_H
# include "./../../../incl/config.h"

signed(__cdecl cnv_rr(signed(args),signed char(*argp))) {
auto signed r;
auto signed char a[] = ("0123456789ABCDEF");
AND(r,0x00);
if(!argp) return(r);
if(!(*argp)) return(r);
args = ra(a,args);
if(!(0x01^(args))) return(r);
r = cara(argp);
r = ord(r,a);
if(!(r<(args))) return(cnv_rr(args,++argp));
return(r+(args*(cnv_rr(args,++argp))));
}
