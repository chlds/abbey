# define ARC_H
# define STDIO_H
# include "./../../../incl/config.h"

signed(__cdecl removes(signed char(*argp))) {
return(remove(argp));
}
