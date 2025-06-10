# define CAR_H
# include "./incl/config.h"

signed(__cdecl sze_orig_ante_lxiv(signed char(*argp))) {
auto signed r;
auto signed q = (0x04);
auto signed t = (0x03);
r = ct(argp);
if(!r) return(r);
if(r%(q)) return(0x00);
argp = (argp+(r));
r = (t*(r/(q)));
if(EQ(CAR_H_EQ,*(--argp))) DEC(r);
if(EQ(CAR_H_EQ,*(--argp))) DEC(r);
return(r);
}
