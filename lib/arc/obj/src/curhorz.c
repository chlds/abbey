/* Synopsis

CHA: Cursor Horizontal Absolute
*/


# define ARC_H
# define CAR_H
# define UNISTD_H
# include "./../../../incl/config.h"

signed(__cdecl curhorz(signed(arg))) {
auto signed char *b;
auto signed r;
auto signed char a[] = ("G");
if(!(0x00<(arg))) arg = (0x01);
b = (ARC_H_CONTROL_SEQUENCE_INTRODUCER);
b = catna(a,catno(arg,cathy(b)));
r = (STDOUT_FILENO);
r = writes(r,b,ct(b));
rlse(b);
b = (0x00);
return(r);
}
