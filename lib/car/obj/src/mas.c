/* Synopsis

Making a mask of bytes
*/


# define CAR_H
# define LIMITS_H
# include "./../../../incl/config.h"

signed(__cdecl mas(signed(arg))) {
if(EQ(CHAR_BIT,0x08)) return(mas_xxe(arg));
return(mas_r(arg));
}
