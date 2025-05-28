# define CAR_H
# include "./incl/config.h"

signed(__cdecl any_ofalphanum_r(signed char(*args),signed(argp))) {
auto signed r;
r = any_ofnum(args);
if(!(r^(~0x00))) return(argp);
if(!(argp^(~0x00))) return(r);
if(argp<(r)) return(argp);
return(r);
}
