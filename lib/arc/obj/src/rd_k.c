/* Synopsis

Reading a single character entered from the keyboard without echoing it onto the screen
*/


# define ARC_H
# define CAR_H
# include "./../../../incl/config.h"

signed char *(__cdecl rd_k(void)) {
auto signed char *b;
b = catt(rdb_k());
if(!(kbdhit())) return(b);
return(cathe(b,rd_k()));
}
