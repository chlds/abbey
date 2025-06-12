/* Synopsis

Decoding in BASE64 as referenced in RFC #1421
*/


# define CAR_H
# include "./incl/config.h"

signed char *(__cdecl dcd_lxiv(signed char(*argp))) {
auto signed char *b;
auto signed r;
auto signed q = (0x04);
auto signed t = (0x03);
b = (0x00);
r = ct(argp);
if(!r) return(b);
if(r%(q)) return(b);
r = sze_orig_ante_lxiv(argp);
if(r%(t)) r = (r+(t+(0x01+(~(r%(t))))));
r++;
b = (signed char*)(alloc(r*(sizeof(char))));
if(!b) return(b);
if(EQ(--r,dcd_xxiv_lxiv(argp,b))) return(b);
rl(b);
b = (0x00);
return(b);
}
