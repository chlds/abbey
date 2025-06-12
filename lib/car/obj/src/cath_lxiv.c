# define CAR_H
# include "./incl/config.h"

signed char *(__cdecl cath_lxiv(signed char(*argp))) {
auto signed char *b;
auto signed r;
auto signed q = (0x04);
b = cath_lxiv_r(argp);
r = ct(b);
if(!(r%(q))) return(b);
b = catna(CAR_H_PADDING_IN_BASE_LXIV,b);
r = ct(b);
if(!(r%(q))) return(b);
return(catna(CAR_H_PADDING_IN_BASE_LXIV,b));
}
