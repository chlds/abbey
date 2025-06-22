# define CAR_H
# define CAT_H
# define TIME_H
# include "./../../../incl/config.h"

void *(__cdecl tme(void)) {
auto time_t *t;
t = (0x00);
t = (time_t*)(alloc(0x01*(sizeof(*t))));
if(!t) return(t);
time(t);
return(t);
}
