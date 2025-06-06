# define CAR_H
# include "./incl/config.h"

signed(__cdecl ldl(signed(args),signed(argp))) {
auto signed m;
m = mas(sizeof(signed short));
AND(argp,m);
NOT(m);
AND(args,m);
OR(args,argp);
return(args);
}
