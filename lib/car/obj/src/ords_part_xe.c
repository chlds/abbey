# define CAR_H
# include "./incl/config.h"

signed(__cdecl ords_part_xe(signed char(**args),signed char(*argp))) {
if(!args) return(0x00);
if(!(*args)) return(0x00);
if(!(cmpe_part(*args,argp))) return(0x00);
return(0x01+(ords_part_xe(++args,argp)));
}
