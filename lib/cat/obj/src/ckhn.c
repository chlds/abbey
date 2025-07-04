/* Synopsis

Clock hands
*/


# define CAT_H
# define TIME_H
# include "./../../../incl/config.h"

void *(__cdecl ckhn(void(*args),signed(argp/*crown*/))) {
auto time_t *t;
if(!args) return(args);
t = (time_t*)(tme());
if(!t) return(t);
AND(*t,0x00);
ADD(*t,(time_t)(grt(args,argp)));
ADD(*t,*(time_t*)(args));
return(t);
}
