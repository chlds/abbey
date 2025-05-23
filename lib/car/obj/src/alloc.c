# define CAR_H
# define STDLIB_H
# include "./incl/config.h"

void*(__cdecl alloc(signed(arg))) {
if(!(0x00<(arg))) return(0x00);
return(malloc(arg));
}
