/* Synopsis

The ordinal number
*/


# define CAR_H
# include "./incl/config.h"

signed(__cdecl ord(signed char(*args),signed(argp))) {
auto signed r;
auto signed m = (0xFF);
if(!args) return(0x00);
if(!(*args)) return(0x00);
r = (m&(*args));
if(!(r^(argp))) return(0x00);
return(0x01+(ord(++args,argp)));
}
