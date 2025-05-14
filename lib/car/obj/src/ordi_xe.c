# define CAR_H
# include "./incl/config.h"

signed(__cdecl ordi_xe(signed(**args),signed(argp))) {
if(!args) return(0x00);
if(!(*args)) return(0x00);
if(!(argp^(**args))) return(0x00);
return(0x01+(ordi_xe(++args,argp)));
}
