# define ARC_H
# include "./../../../incl/config.h"

signed(__cdecl rds(signed(arg))) {
auto signed q;
auto signed r;
if(arg<(0x00)) return(0x00);
r = reads(arg,&q,0x01);
if(!(0x00<(r))) return(0x00);
return(q);
}
