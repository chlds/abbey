# define CAR_H
# include "./../../../incl/config.h"

signed char *(__cdecl cv_romnum_xe_rr(signed(arg))) {
auto signed char *b;
auto signed r;
auto signed char *(e[]) = {
"",
"x",
"xx",
"xxx",
"xl",
"l",
"lx",
"lxx",
"lxxx",
"xc",
0x00,
};
b = (0x00);
if(!(0x00<(arg))) return(b);
r = cnt_v(e);
if(!r) return(b);
b = (*(e+(arg%(r))));
return(catna(b,cv_romnum_xe_rrr(arg/(r))));
}
