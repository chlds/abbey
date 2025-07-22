/* Synopsis

Read to
*/


# define ARC_H
# define CAR_H
# include "./../../../incl/config.h"

signed char *(__cdecl rdt(signed(args),void(*argp))) {
auto signed r;
if(!argp) return(argp);
r = rdb(argp);
if(EQ(args,r)) return(catt(r));
return(catho_xxe(r,rdt(args,argp)));
}
