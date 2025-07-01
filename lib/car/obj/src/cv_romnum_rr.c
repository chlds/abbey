# define CAR_H
# include "./../../../incl/config.h"

signed char *(__cdecl cv_romnum_rr(signed(arg))) {
auto signed char *b;
auto signed r;
auto signed char *(e[]) = {
"",
"X",
"XX",
"XXX",
"XL",
"L",
"LX",
"LXX",
"LXXX",
"XC",
0x00,
};
b = (0x00);
if(!(0x00<(arg))) return(b);
r = cnt_b(e);
if(!r) return(b);
b = (*(e+(arg%(r))));
return(catna(b,cv_romnum_rrr(arg/(r))));
}
