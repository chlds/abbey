/* Synopsis

Reading a single character entered from the keyboard without echoing it onto the screen
*/


# define ARC_H
# define STDIO_H
# define TERMIOS_H
# define UNISTD_H
# include "./../../../incl/config.h"

signed(__cdecl rdb_k(void)) {
auto signed b;
auto signed r;
auto struct termios d;
auto struct termios e;
b = (STDIN_FILENO);
tcgetattr(b,&e);
d = (e);
AND(d.c_lflag,~(ICANON|(ECHO)));
tcsetattr(b,TCSANOW,&d);
r = rdb(stdin);
tcsetattr(b,TCSANOW,&e);
return(r);
}
