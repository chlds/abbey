# define CAR_H
# include "./../../../incl/config.h"

signed(__cdecl cv_upper(signed(arg))) {
auto signed char u[] = ("ABCDEFGHIJKLMNOPQRSTUVWXYZ");
auto signed char l[] = ("abcdefghijklmnopqrstuvwxyz");
arg = ord(arg,l);
if(!(arg<(ct(l)))) return(0x00);
arg = cara(arg+(u));
return(arg);
}
