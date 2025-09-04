# define CAR_H
# include "./../../../incl/config.h"

signed(__cdecl cnv_xe_rr(signed(args),signed char(*argp))) {
auto signed r;
auto signed l = (0x03);
auto signed char a[] = ("0123456789ABCDEF");
AND(r,0x00);
if(!argp) return(r);
if(!(*argp)) return(r);
args = ra(a,args);
if(!(0x01^(args))) return(r);
r = cnv_gmkib_xe(args,argp);
if(r) return(r*(cnv_xe_rr(args,(l+(argp)))));
r = cnv_gmkb(args,argp);
if(r) return(r*(cnv_xe_rr(args,++argp)));
r = cara(argp);
r = ordi(r,a);
if(r<(0x00)) return(cnv_xe_rr(args,++argp));
return(r+(args*(cnv_xe_rr(args,++argp))));
}
