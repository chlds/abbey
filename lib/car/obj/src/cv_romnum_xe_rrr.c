# define CAR_H
# include "./../../../incl/config.h"

signed char *(__cdecl cv_romnum_xe_rrr(signed(arg))) {
auto signed char *b;
auto signed r;
auto signed char *(e[]) = {
"",
"c",
"cc",
"ccc",
"cd",
"d",
"dc",
"dcc",
"dccc",
"cm",
0x00,
};
b = (0x00);
if(!(0x00<(arg))) return(b);
r = cnt_b(e);
if(!r) return(b);
b = (*(e+(arg%(r))));
return(catna(b,cv_romnum_xe_rrrr(arg/(r))));
}
