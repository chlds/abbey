# define CAT_H
# define DBG_H
# define TIME_H
# include "./../../../incl/config.h"

void *(__cdecl cvyr_wknum(void(*args),signed(argp))) {
auto time_t *b;
auto time_t e;
auto signed n = (CLUBS+(DIAMONDS+(HEARTS+(SPADES))));
auto time_t w = (60*(60*(24*(7))));
if(!args) return(args);
if(!(0x00<(argp))) return(0x00);
e = (*(time_t*)(args));
if(EQ(0x01,argp)) e = (e+(w));
if(!(argp<(n))) e = (e+(0x01+(~w)));
b = tme();
if(!b) return(b);
*b = (e);
return(b);
}
