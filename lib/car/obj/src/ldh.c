# define CAR_H
# include "./incl/config.h"

signed(__cdecl ldh(signed(args),signed(argp))) {
auto signed m;
auto signed b;
b = bpb();
b = (b*(sizeof(signed short)));
m = mas(sizeof(signed short));
AND(args,m);
AND(argp,m);
SHL(argp,b);
NOT(m);
AND(argp,m);
OR(args,argp);
return(args);
}
