# define ARC_H
# define UNISTD_H
# include "./../../../incl/config.h"

signed(__cdecl reads(signed(argt),signed char(*args),signed(argp))) {
return(read(argt,args,argp));
}
