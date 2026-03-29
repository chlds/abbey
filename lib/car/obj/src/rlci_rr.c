# define CAR_H
# include "./../../../incl/config.h"

signed char **(__cdecl rlci_rr(signed char(**argp))) {
if(!deref_xe(argp)) return(argp);
annih(*argp);
*argp = (0x00);
return(rlci_rr(++argp));
}
