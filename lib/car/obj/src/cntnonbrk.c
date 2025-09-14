# define CAR_H
# include "./../../../incl/config.h"

signed(__cdecl cntnonbrk(signed char(*argp))) {
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
if(EQ(CAR_H_CR,*argp)) return(cntnonbrk(++argp));
if(EQ(CAR_H_LF,*argp)) return(cntnonbrk(++argp));
return(0x01+(cntnonbrk(++argp)));
}
