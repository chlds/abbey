/* Synopsis

Wheel train
*/


# define CAT_H
# define TIME_H
# include "./../../../incl/config.h"

signed(__cdecl wlt(signed(arg))) {
auto signed r;
auto signed t = (24*(CAT_H_CIRCLE_ANGLE/(CAT_H_ANGLE_OF_ROTATION)));
auto signed x = (CAT_H_SCALE);
r = (arg);
if(r<(0x00)) r = (0x01+(~r));
if(!(r<(t*(x)))) AND(arg,0x00);
return(arg);
}
