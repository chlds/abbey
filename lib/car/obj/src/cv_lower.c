# define CAR_H
# include "./../../../incl/config.h"

signed(__cdecl cv_lower(signed(arg))) {
auto signed char u[] = ("ABCDEFGHIJKLMNOPQRSTUVWXYZ");
auto signed char l[] = ("abcdefghijklmnopqrstuvwxyz");
arg = ordi(arg,u);
if(arg<(0x00)) return(0x00);
return(cara(arg+(l)));
}
