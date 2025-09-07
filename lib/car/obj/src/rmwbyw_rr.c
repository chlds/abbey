# define CAR_H
# include "./../../../incl/config.h"

signed char *(__cdecl rmwbyw_rr(signed char(*argp))) {
auto signed r;
if(!(lt(argp))) return(argp);
if(!(anynum(argp))) return(rmnum_xe(argp));
if(!(anysym(argp))) return(rmsym_xe(argp));
return(rmwbyw_rrr(argp));
}
