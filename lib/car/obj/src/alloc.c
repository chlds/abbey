# define CAR_H
# define STDLIB_H
# include "./incl/config.h"

void*(__cdecl alloc(signed(arg))) {
return(malloc(arg));
}
