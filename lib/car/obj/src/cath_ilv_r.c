# define CAR_H
# include "./../../../incl/config.h"

signed char *(__cdecl cath_ilv_r(signed(args),signed char(*argp))) {
auto signed char *b;
b = cyne(argp,args);
if(!(EQ(args,ct(b)))) return(b);
return(ilv(b,cath_ilv_r(args,args+(argp))));
}
