/* Synopsis

Wheel train
*/


# define CAT_H
# define TIME_H
# include "./../../../incl/config.h"

signed(__cdecl wlt(signed(arg))) {
auto signed x = (CAT_H_SCALE);
auto signed e = (24*(CAT_H_CIRCLE_ANGLE/(CAT_H_ANGLE_OF_ROTATION)));
return(arg%(e*(x)));
}
