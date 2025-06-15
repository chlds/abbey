/* Synopsis

Reading a single character from the specified stream
*/


# define ARC_H
# define STDIO_H
# include "./../../../incl/config.h"

signed(__cdecl rdb(void(*argp))) {
return(fgetc(argp));
}
