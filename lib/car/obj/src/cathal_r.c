# define CAR_H
# include "./../../../incl/config.h"

signed char *(__cdecl cathal_r(signed(args),signed char(*argp))) {
auto signed char *b;
b = (argp);
if(!b) return(b);
*b = (signed char)(args&(mas(sizeof(char))));
b++;
*b = (0x00);
b = (0x00);
return(argp);
}
