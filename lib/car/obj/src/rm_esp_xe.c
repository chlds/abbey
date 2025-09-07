# define CAR_H
# include "./../../../incl/config.h"

signed char *(__cdecl rm_esp_xe(signed char(*argp))) {
auto signed char *b;
b = rm_esp(argp);
rlse(argp);
argp = (0x00);
return(b);
}
