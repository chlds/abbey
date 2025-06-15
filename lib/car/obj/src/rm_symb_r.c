# define CAR_H
# include "./../../../incl/config.h"

signed char *(__cdecl rm_symb_r(signed char(*argp))) {
if(!(lt(argp))) return(argp);
if(!(endln_symb(argp))) return(argp);
return(rm_symb_r(rmlbyl_xe(argp)));
}
