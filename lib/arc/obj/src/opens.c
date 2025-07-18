# define ARC_H
# define FCNTL_H
# define STDARG_H
# define SYS_TYPES_H
# define SYS_STAT_H
# include "./../../../incl/config.h"

signed(__sysv opens(signed char(*args),signed(argp),...)) {
auto signed r;
auto va_list a;
if(!(O_CREAT&(argp))) return(open(args,argp));
va_start(a,argp);
r = open(args,argp,va_arg(a,mode_t));
va_end(a);
return(r);
}
