/* Synopsis

Cannon pinion
*/


# define CAT_H
# define TIME_H
# include "./../../../incl/config.h"

signed(__cdecl canonpin(signed(arg))) {
auto signed mn = (60);
return(arg*(mn*(CAT_H_ANGLE_OF_ROTATION/(CAT_H_ANGLE_OF_HANDS))));
}
