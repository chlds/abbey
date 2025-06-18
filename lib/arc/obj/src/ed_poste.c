/* Synopsis

ED: Erase in Display
*/


# define ARC_H
# define CAR_H
# define UNISTD_H
# include "./../../../incl/config.h"

signed(__cdecl ed_poste(void)) {
auto signed char *b;
auto signed r;
auto signed char a[] = ("0J");
b = (ARC_H_CONTROL_SEQUENCE_INTRODUCER);
b = catna(a,cathy(b));
r = (STDOUT_FILENO);
r = wrs(r,b,ct(b));
rlse(b);
b = (0x00);
return(r);
}
