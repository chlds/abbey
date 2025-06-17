/* Synopsis

Re-align
*/


# define ARC_H
# define SIGNAL_H
# include "./../../../incl/config.h"

void(__sysv realign(signed(arg))) {
curmv(1,1);
clr_r();
if(EQ(SIGWINCH,arg)) signal(SIGWINCH,realign);
}
