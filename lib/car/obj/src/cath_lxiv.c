# define CAR_H
# include "./incl/config.h"

signed char *(__cdecl cath_lxiv(signed char(*args),signed char *(__cdecl*argp)(signed char(*args)))) {
auto signed char *b;
auto signed r;
auto signed q = (0x04);
b = (0x00);
if(!argp) return(b);
b = argp(args);
r = ct(b);
if(!(r%(q))) return(b);
b = catna(CAR_H_PADDING_IN_BASE_LXIV,b);
r = ct(b);
if(!(r%(q))) return(b);
return(catna(CAR_H_PADDING_IN_BASE_LXIV,b));
}
