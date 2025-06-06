# define CAR_H
# include "./incl/config.h"

signed(__cdecl andh(signed(args),signed(argp))) {
auto signed r;
auto signed m;
auto signed b;
b = bpb();
b = (b*(sizeof(signed short)));
m = mas(sizeof(signed short));
AND(r,0x00);
OR(r,args);
SHR(r,b);
AND(r,m);
AND(argp,m);
AND(r,argp);
AND(args,m);
SHL(r,b);
NOT(m);
AND(r,m);
OR(args,r);
return(args);
}
