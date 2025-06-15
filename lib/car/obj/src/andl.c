# define CAR_H
# include "./../../../incl/config.h"

signed(__cdecl andl(signed(args),signed(argp))) {
auto signed r;
auto signed m;
m = mas(sizeof(signed short));
AND(r,0x00);
OR(r,args);
AND(r,m);
AND(argp,m);
AND(r,argp);
NOT(m);
AND(args,m);
OR(args,r);
return(args);
}
