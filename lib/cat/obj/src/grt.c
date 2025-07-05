/* Synopsis

Gear train
*/


# define CAT_H
# define TIME_H
# include "./../../../incl/config.h"

signed(__cdecl grt(void(*args),signed(argp))) {
auto signed t;
auto signed r;
auto signed a = (CAT_H_ALLDAY);
auto signed n = (CAT_H_NOON);
auto signed x = (CAT_H_SCALE);
if(!args) return(0x00);
t = cnt_tz(args);
r = (t+(canonpin(wlt(argp))));
if(r<(0x00)) r = (r+(a*(x)));
if(!(r<(n*(x)))) r = (r+(0x01+(~(a*(x)))));
r = (r+(0x01+(~t)));
return(r);
}
