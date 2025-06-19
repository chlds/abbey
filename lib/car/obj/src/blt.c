# define CAR_H
# include "./../../../incl/config.h"

signed(__cdecl blt(signed char(*argp))) {
auto signed r;
r = lt(argp);
if(!r) return(r);
r = (0x01+(~r));
return(r+(bpb()));
}
