# define CAR_H
# define CAT_H
# define TIME_H
# include "./../../../incl/config.h"

void *(__cdecl tme_xe(void)) {
auto signed long *b;
auto struct timespec t;
auto signed e = (TIME_UTC);
b = (0x00);
b = (signed long*)(alloc(0x01*(sizeof(*b))));
if(!b) return(b);
*b = (0x00);
if(EQ(e,timespec_get(&t,e))) *b = (R(tv_nsec,t));
return(b);
}
