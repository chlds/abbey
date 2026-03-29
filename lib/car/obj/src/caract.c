# define CAR_H
# include "./../../../incl/config.h"

signed(__cdecl caract(signed(arg))) {
auto signed a[] = {
0x01,0x80,0x02,0x03,0x04,0x05,0x06,0x07,0x08,0x00,
};
if(!arg) return(arg);
return(*(a+(clo(arg))));
}
