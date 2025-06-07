# define CAR_H
# include "./incl/config.h"

signed(__cdecl drft(signed(args),signed(argp))) {
auto signed m;
auto signed b;
b = bpb();
b = (b*(sizeof(signed char)));
m = mas(sizeof(signed char));
SHL(argp,b);
AND(args,m);
NOT(m);
AND(argp,m);
OR(argp,args);
return(argp);
}
