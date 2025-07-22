/* Synopsis

Abscissa
*/


# define ARC_H
# define TERMIOS_H
# include "./../../../incl/config.h"

signed(__cdecl curabsc(void)) {
auto signed r;
auto struct termios a;
auto struct termios b;
tcgetattr(0x00,&b);
a = (b);
AND(a.c_lflag,~(ICANON|(ECHO)));
tcsetattr(0x00,TCSANOW,&a);
r = currpt_x();
tcsetattr(0x00,TCSANOW,&b);
return(r);
}
