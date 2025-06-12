# define CAR_H
# include "./incl/config.h"

signed(__cdecl sze_orig_ante_lxiv_xe(signed char(*argp))) {
auto signed r;
auto signed q = (0x04);
auto signed t = (0x03);
r = ct_lxiv(argp);
if(!r) return(r);
if(r%(q)) return(0x00);
r = (t*(r/(q)));
argp = (argp+(ct(argp)));
--argp;
--argp;
if(EQ(CAR_H_EQ,*(--argp))) DEC(r);
if(EQ(CAR_H_EQ,*(--argp))) DEC(r);
return(r);
}
