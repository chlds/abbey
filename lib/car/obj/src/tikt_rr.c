# define CAR_H
# include "./../../../incl/config.h"

signed char *(__cdecl tikt_rr(signed(args),signed(argp))) {
auto signed char *b;
auto signed r;
auto signed char a[] = ("0123456789ABCDEF");
b = (0x00);
argp = ra(a,argp);
if(!(0x01^(argp))) return(b);
if(args<(0x00)) args = (0x01+(~args));
if(args<(0x00)) AND(args,0x00);
b = catt(cara(a+(args%(argp))));
if(!b) return(b);
args = (args/(argp));
if(!args) return(b);
return(catne(b,tikt_rr(args,argp)));
}
