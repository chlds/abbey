# define CAR_H
# include "./incl/config.h"

signed char *(__cdecl rm_by_wrd_rr(signed char(*argp))) {
auto signed r;
if(!(lt(argp))) return(argp);
if(endln_num(argp)) return(rm_num_xe(argp));
if(endln_symb(argp)) return(rm_symb_xe(argp));
return(rm_by_wrd_rrr(argp));
}
