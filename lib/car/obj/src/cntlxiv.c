# define CAR_H
# include "./../../../incl/config.h"

signed(__cdecl cntlxiv(signed char(*argp))) {
auto signed r;
auto signed q = (0x04);
r = cntlxiv_r(argp);
if(r%(q)) return(0x00);
return(r);
}
