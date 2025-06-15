# define CAR_H
# include "./../../../incl/config.h"

signed(__cdecl carh(signed(arg))) {
auto signed r;
r = bpb();
SHR(arg,r*(sizeof(signed short)));
AND(arg,mas(sizeof(signed short)));
return(arg);
}
