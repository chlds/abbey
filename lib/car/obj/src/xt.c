# define ARC_H
# define CAR_H
# define ERRNO_H
# include "./../../../incl/config.h"

signed(__cdecl xt(signed char(*argq/*perm*/),signed char(*argt/*path*/),signed(args),signed(__cdecl*argp)(signed(args),signed(argx/*desc*/)))) {
auto signed d;
auto signed r;
if(!argq) return(0x00);
if(!argt) return(0x00);
r = xt_am(argq);
d = opens(argt,r,xt_pm(argq));
if(!(0x01+(d))) return(0x00);
AND(r,0x00);
OR(r,0x01);
if(argp) r = argp(args,d);
if(!(0x01+(closes(d)))) return(0x00);
return(r);
}
