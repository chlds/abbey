# define CAR_H
# include "./../../../incl/config.h"

signed(__cdecl bpb_rr(signed char(*argp))) {
auto signed char r;
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
AND(r,0x00);
NOT(r);
AND(*argp,r);
LD(r,*argp);
SHL(r,0x01);
LD(*argp,r);
return(0x01+(bpb_rr(argp)));
}
