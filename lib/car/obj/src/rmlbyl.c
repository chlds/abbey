/* Synopsis

Remove one character at the end of a line
*/


# define CAR_H
# include "./incl/config.h"

signed char *(__cdecl rmlbyl(signed char(*argp))) {
auto signed char *b;
auto signed r;
b = cathy(argp);
if(!b) return(b);
r = lt_xe(b);
if(!r) return(b);
r = (0x01+(~r));
bury(b+(r+(ct(b))));
return(cathy_xe(b));
}
