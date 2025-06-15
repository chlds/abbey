/* Synopsis

Checking if a key has been pressed on the keyboard
*/


# define ARC_H
# define FCNTL_H
# define STDIO_H
# define TERMIOS_H
# define UNISTD_H
# include "./../../../incl/config.h"

signed(__cdecl kbdhit(void)) {
auto signed b;
auto signed c;
auto signed r;
auto struct termios d;
auto struct termios e;
b = (STDIN_FILENO);
tcgetattr(b,&e);
d = (e);
AND(d.c_lflag,~(ICANON|(ECHO)));
tcsetattr(b,TCSANOW,&d);
c = fcntl(b,F_GETFL,0x00);
fcntl(b,F_SETFL,c|(O_NONBLOCK));
r = rdb(stdin);
fcntl(b,F_SETFL,c);
tcsetattr(b,TCSANOW,&e);
if(EQ(EOF,r)) return(0x00);
unrdb(r,stdin);
return(0x01);
}
