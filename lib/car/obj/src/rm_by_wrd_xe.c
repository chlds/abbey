# define CAR_H
# include "./incl/config.h"

signed char *(__cdecl rm_by_wrd_xe(signed char(*argp))) {
auto signed char *b;
b = rm_by_wrd(argp);
rlse(argp);
argp = (0x00);
return(b);
}
