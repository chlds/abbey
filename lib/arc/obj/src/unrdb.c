/* Synopsis

Pushing a character back onto the specified stream
*/


# define ARC_H
# define STDIO_H
# include "./../../../incl/config.h"

signed(__cdecl unrdb(signed(args),void(*argp))) {
return(ungetc(args,argp));
}
