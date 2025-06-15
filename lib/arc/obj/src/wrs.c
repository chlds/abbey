# define ARC_H
# define UNISTD_H
# include "./../../../incl/config.h"

signed(__cdecl wrs(signed(argt),signed char(*args),signed(argp))) {
return(write(argt,args,argp));
}
