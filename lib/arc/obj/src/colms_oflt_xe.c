# define ARC_H
# define LOCALE_H
# include "./../../../incl/config.h"

signed(__cdecl colms_oflt_xe(signed char(*argp))) {
auto signed char *b;
auto signed r;
auto signed char a[] = ("C.UTF-8");
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
b = (0x00);
b = setlocale(LC_ALL,b);
setlocale(LC_ALL,a);
r = colms_oflt_xe_r(argp);
setlocale(LC_ALL,b);
return(r);
}
