# define ARC_H
# define UNISTD_H
# include "./../../../incl/config.h"

signed(__cdecl writes(signed(argt),void(*args),signed(argp))) {
return(write(argt,args,argp));
}
