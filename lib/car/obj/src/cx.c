# define CAR_H
# include "./incl/config.h"

signed char *(__cdecl cx(signed(argq/*digit*/),signed(argt),signed char(*args/*et*/),signed char(*argp))) {
auto signed char *b;
if(!argp) return(argp);
b = cx_r(argq,argt,args,argp);
bury(argp);
rl(argp);
argp = (0x00);
return(b);
}
