# define CAR_H
# include "./incl/config.h"

signed char *(__cdecl tikt_rr(signed(argt),signed(args),signed char(*argp))) {
auto signed char *b;
auto signed r;
auto signed mask = (0xFF);
auto signed binary = (0x02);
auto signed char a[] = ("0123456789ABCDEF");
if(!argp) return(argp);
r = ct(a);
if(r<(binary)) return(argp);
if(args<(binary)) args = (binary);
if(r<(args)) args = (r);
if(argt<(0x00)) argt = (0x01+(~argt));
if(argt<(0x00)) AND(argt,0x00);
b = (0x00);
argp = catn_xe(argp,cathe(mask&(*(a+(argt%(args))))),b);
argt = (argt/(args));
if(!argt) return(argp);
return(tikt_rr(argt,args,argp));
}
