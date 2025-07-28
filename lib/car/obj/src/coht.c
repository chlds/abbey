/* Synopsis

Coherent
*/


# define CAR_H
# include "./../../../incl/config.h"

signed(__cdecl coht(signed char(*argp))) {
if(!(EQ(0x80,caract(cara(argp))))) return(0x00);
return(0x01+(coht(++argp)));
}
