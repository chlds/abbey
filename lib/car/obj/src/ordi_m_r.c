# define CAR_H
# include "./../../../incl/config.h"

signed(__cdecl ordi_m_r(signed(args),signed(**argp))) {
if(!argp) return(~0x00);
if(!(*argp)) return(~0x00);
if(!(args^(**argp))) return(0x00);
return(alte(0x01,ordi_m_r(args,++argp)));
}
