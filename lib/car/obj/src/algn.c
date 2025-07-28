/* Synopsis

Align
*/


# define CAR_H
# include "./../../../incl/config.h"

signed(__cdecl algn(signed char(*argp))) {
auto signed r;
r = caract(cara(argp));
if(!r) return(r);
if(EQ(0x01,r)) return(r);
if(EQ(r,0x01+(coht(++argp)))) return(r);
return(0x00);
}
