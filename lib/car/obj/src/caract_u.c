# define CAR_H
# include "./../../../incl/config.h"

signed(__cdecl caract_u(signed(arg))) {
// auto signed b7 = (36); // 36b (0+(6e(6
// auto signed b6 = (31); // 31b (1+(6e(5
// auto signed b5 = (26); // 26b (2+(6e(4
auto signed b4 = (21); // 21b (3+(6e(3
auto signed b3 = (16); // 16b (4+(6e(2
auto signed b2 = (11); // 11b (5+(6e(1
auto signed b1 = (7); // 7b
AND(arg,mas(sizeof(signed)));
if(!arg) return(arg);
if(!(arg&(~b1))) return(0x01);
if(!(arg&(~(mas_xe(b2))))) return(0x02);
if(!(arg&(~(mas_xe(b3))))) return(0x03);
if(!(arg&(~(mas_xe(b4))))) return(0x04);
// if(!(arg&(~(mas_xe(b5))))) return(0x05);
// if(!(arg&(~(mas_xe(b6))))) return(0x06);
// if(!(arg&(~(mas_xe(b7))))) return(0x07);
return(0x00);
}
