/* Synopsis

DECXCPR: Report Cursor Position
*/


# define ARC_H
# define CAR_H
# define STDIO_H
# include "./../../../incl/config.h"

signed(__cdecl currpt_y(void)) {
auto signed char *b;
auto signed r;
auto signed e = ('R');
auto signed char a[] = (";");
r = currpt();
if(!(0x00<(r))) return(0x00);
b = rdt(e,stdin);
if(!b) return(0x00);
bury(b+(cntto(a,b)));
r = cnv_dec(b);
rlse(b);
b = (0x00);
return(r);
}
