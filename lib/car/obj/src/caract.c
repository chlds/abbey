# define CAR_H
# include "./incl/config.h"

signed(__cdecl caract(signed(arg))) {
auto signed mask = (0xFF);
auto signed sq = (0x80);
auto signed b2 = (0xC0);
auto signed b3 = (0xE0);
auto signed b4 = (0xF0);
// auto signed b5 = (0xF8);
// auto signed b6 = (0xFC);
// auto signed b7 = (0xFE);
AND(arg,mask);
if(!arg) return(arg);
if(!(sq&(arg))) return(0x01);
// if(!(b7^(b7&(arg)))) return(0x07);
// if(!(b6^(b6&(arg)))) return(0x06);
// if(!(b5^(b5&(arg)))) return(0x05);
if(!(b4^(b4&(arg)))) return(0x04);
if(!(b3^(b3&(arg)))) return(0x03);
if(!(b2^(b2&(arg)))) return(0x02);
return(sq);
}
