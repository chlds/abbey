# define CAR_H
# include "./../../../incl/config.h"

signed char *(__cdecl rmlt_r(signed char(*argp))) {
if(!(lt(argp))) return(argp);
if(EQ(CAR_H_HT,cara(argp))) return(argp);
if(EQ(CAR_H_LF,cara(argp))) return(argp);
if(EQ(CAR_H_CR,cara(argp))) return(argp);
if(!(any_ofmb(argp))) return(argp);
if(!(any_ofspa(argp))) return(argp);
if(!(any_ofnum(argp))) return(argp);
if(!(any_ofsymb(argp))) return(argp);
return(rmlt_r(dele_xe(argp)));
}
