# define CAR_H
# include "./incl/config.h"

signed(__cdecl dcd_xxiv_lxiv(signed char(*args),signed char(*argp))) {
auto signed char *b;
auto signed r;
auto signed q = (0x04);
auto signed t = (0x03);
if(!args) return(0x00);
if(!(ct(argp))) return(0x00);
args = (args+(t));
b = (args);
*b = (0x00);
r = dcd_vi_xxiv_lxiv(argp);
*(--b) = (r&(mas_xe(bpb())));
SHR(r,bpb());
*(--b) = (r&(mas_xe(bpb())));
SHR(r,bpb());
*(--b) = (r&(mas_xe(bpb())));
b = (0x00);
return(t+(dcd_xxiv_lxiv(args,argp+(q))));
}
