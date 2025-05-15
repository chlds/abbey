# define CAR_H
# include "./incl/config.h"

signed(__cdecl cv_lower(signed(arg))) {
auto signed char u[] = ("ABCDEFGHIJKLMNOPQRSTUVWXYZ");
auto signed char l[] = ("abcdefghijklmnopqrstuvwxyz");
arg = ord(arg,u);
if(!(arg<(ct(u)))) return(0x00);
arg = (signed)(*(arg+(l)));
return(arg);
}
