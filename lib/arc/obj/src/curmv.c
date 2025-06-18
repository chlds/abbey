/* Synopsis

CUP: Cursor Position
*/


# define ARC_H
# define CAR_H
# define UNISTD_H
# include "./../../../incl/config.h"

signed(__cdecl curmv(signed(args),signed(argp))) {
auto signed char *b;
auto signed r;
auto signed char a[] = (";");
auto signed char h[] = ("H");
if(!(0x00<(args))) args = (0x01);
if(!(0x00<(argp))) argp = (0x01);
b = (ARC_H_CONTROL_SEQUENCE_INTRODUCER);
b = catna(h,catno(argp,catna(a,catno(args,cathy(b)))));
r = (STDOUT_FILENO);
r = wrs(r,b,ct(b));
rlse(b);
b = (0x00);
return(r);
}
