# define CAR_H
# include "./../../../incl/config.h"

signed char *(__cdecl rmwbyw_rr(signed char(*argp))) {
auto signed r;
if(!(lt(argp))) return(argp);
if(!(any_ofnum(argp))) return(rmnum_xe(argp));
if(!(any_ofsymb(argp))) return(rmsymb_xe(argp));
return(rmwbyw_rrr(argp));
}
