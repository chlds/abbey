# define CAR_H
# define CAT_H
# include "./../../../incl/config.h"

signed char *(__cdecl cal_dm_in_en(signed(arg))) {
auto signed char *b;
auto signed r;
b = (0x00);
if(!(0x00<(arg))) return(b);
r = (arg%(10));
if(EQ(0x01,r)) b = ("st");
if(EQ(0x02,r)) b = ("nd");
if(EQ(0x03,r)) b = ("rd");
if(EQ(0x0D,arg)) b = (0x00);
if(EQ(0x0C,arg)) b = (0x00);
if(EQ(0x0B,arg)) b = (0x00);
if(!b) b = ("th");
return(catho(arg,cathy(b)));
}
