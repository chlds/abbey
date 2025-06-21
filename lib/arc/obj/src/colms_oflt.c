# define ARC_H
# define CAR_H
# define LOCALE_H
# define WCHAR_H
# define _XOPEN_SOURCE
# include "./../../../incl/config.h"

signed(__cdecl colms_oflt(signed char(*argp))) {
auto signed char *b;
auto signed r;
auto signed char a[] = ("C.UTF-8");
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
b = (0x00);
b = setlocale(LC_ALL,b);
setlocale(LC_ALL,a);
r = wcwidth(ecd_u(argp));
setlocale(LC_ALL,b);
return(r);
}
