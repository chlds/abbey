# define CAR_H
# include "./../../../incl/config.h"

signed char *(__cdecl cv_romnum_xe_rrrr(signed(arg))) {
auto signed char *b;
auto signed r;
auto signed char *(e[]) = {
"",
"m",
"mm",
"mmm",
"mmmm",
"mmmmm",
"mmmmmm",
"mmmmmmm",
"mmmmmmmm",
"mmmmmmmmm",
0x00,
};
b = (0x00);
if(!(0x00<(arg))) return(b);
r = cnt_b(e);
if(!r) return(b);
b = (*(e+(arg%(r))));
return(cathy(b));
}
