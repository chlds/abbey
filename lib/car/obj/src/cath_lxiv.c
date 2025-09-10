# define CAR_H
# include "./../../../incl/config.h"

signed char *(__cdecl cath_lxiv(signed char(*args),signed char *(__cdecl*argp)(signed char(*args)))) {
auto signed char *b;
auto signed r;
auto signed q = (0x04);
auto signed char *a = (CAR_H_PADDING_IN_BASE_LXIV);
b = (0x00);
if(!argp) return(b);
b = argp(args);
r = ct(b);
if(!(r%(q))) return(b);
ADD(r,ct(a));
if(!(r%(q))) return(catna(a,b));
return(catna(a,catna(a,b)));
}
