# define ARC_H
# define CAR_H
# define ERRNO_H
# include "./../../../incl/config.h"

signed char *(__cdecl xtt(signed char(*argq/*perm*/),signed char(*argt/*path*/),signed(args),signed char *(__cdecl*argp)(signed(argx/*desc*/),signed(args)))) {
auto signed char *b;
auto signed d;
auto signed r;
if(!argq) return(0x00);
if(!argt) return(0x00);
r = xt_am(argq);
d = opens(argt,r,xt_pm(argq));
if(!(0x01+(d))) return(0x00);
b = (0x00);
if(argp) b = argp(d,args);
if(!(0x01+(closes(d)))) {
rlse(b);
b = (0x00);
}
return(b);
}
