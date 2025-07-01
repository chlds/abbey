# define CAR_H
# include "./../../../incl/config.h"

signed char *(__cdecl cv_romnum_rrr(signed(arg))) {
auto signed char *b;
auto signed r;
auto signed char *(e[]) = {
"",
"C",
"CC",
"CCC",
"CD",
"D",
"DC",
"DCC",
"DCCC",
"CM",
0x00,
};
b = (0x00);
if(!(0x00<(arg))) return(b);
r = cnt_b(e);
if(!r) return(b);
b = (*(e+(arg%(r))));
return(catna(b,cv_romnum_rrrr(arg/(r))));
}
