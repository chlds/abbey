# define CAR_H
# include "./../../../incl/config.h"

signed(__cdecl cnv_gib(signed char(*argp))) {
auto signed e = (3);
auto signed k = (1024);
auto signed char a[] = ("GiB");
if(!argp) return(0x00);
if(cmpe_part(a,argp)) return(0x00);
return(r_pow(k,e));
}
