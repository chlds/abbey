/* Synopsis

Writing a single character onto the specified stream
*/


# define ARC_H
# define STDIO_H
# include "./../../../incl/config.h"

signed(__cdecl wrb(signed(args),void(*argp))) {
return(fputc(args,argp));
}
