/* Synopsis

Rows
*/


# define ARC_H
# define CAR_H
# define SYS_IOCTL_H
# define UNISTD_H
# include "./../../../incl/config.h"

signed(__cdecl rows(void)) {
auto signed r;
auto signed q;
auto struct winsize z;
q = (TIOCGWINSZ);
r = (STDIN_FILENO);
r = ioctl(r,q,&z);
if(r) return(togg(r));
r = (z.ws_row);
return(r);
}
