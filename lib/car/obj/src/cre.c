# define CAR_H
# include "./../../../incl/config.h"

signed(__cdecl cre(signed char(*argp))) {
auto signed char a[] = ("create,excl,rdwr,644");
if(!argp) return(0x00);
return(xt(a,argp,0x00,0x00));
}
