/* Synopsis

ED: Erase in Display
*/


# define ARC_H
# define CAR_H
# define UNISTD_H
# include "./../../../incl/config.h"

signed(__cdecl ed_entire(void)) {
auto signed char *b;
auto signed r;
auto signed char a[] = ("2J");
r = (STDOUT_FILENO);
b = catna(a,cathy(ARC_H_CONTROL_SEQUENCE_INTRODUCER));
r = wrs(r,b,ct(b));
rlse(b);
b = (0x00);
return(r);
}
