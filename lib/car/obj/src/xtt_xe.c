# define ARC_H
# define CAR_H
# define ERRNO_H
# include "./../../../incl/config.h"

signed char *(__cdecl xtt_xe(signed char(*argv/*perm*/),signed char(*argq/*path*/),signed(argt/*seek*/),signed(args),signed char *(__cdecl*argp)(signed(argx/*desc*/),signed(args)))) {
auto signed char *b;
auto signed d;
auto signed r;
if(!argv) return(0x00);
if(!argq) return(0x00);
r = xt_am(argv);
d = opens(argq,r,xt_pm(argv));
if(!(0x01+(d))) return(0x00);
b = (0x00);
if(argp) {
if(EQ(argt,atpt(d,argt))) b = argp(d,args);
}
if(!(0x01+(closes(d)))) {
rlse(b);
b = (0x00);
}
return(b);
}
