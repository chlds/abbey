# define CAR_H
# include "./../../../incl/config.h"

signed char *(__cdecl rm_lt_r(signed char(*argp))) {
if(!(lt(argp))) return(argp);
if(!(endln_lt(argp))) return(argp);
if(endln_ht(argp)) return(argp);
if(endln_lf(argp)) return(argp);
if(endln_cr(argp)) return(argp);
if(endln_esp(argp)) return(argp);
if(endln_num(argp)) return(argp);
if(endln_symb(argp)) return(argp);
return(rm_lt_r(rmlbyl_xe(argp)));
}
