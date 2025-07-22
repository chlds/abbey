/* Synopsis

Lay down
*/


# define ARC_H
# include "./../../../incl/config.h"

signed(__cdecl lydn(signed char(*argp))) {
auto signed r;
r = hrmabsc();
if(r<(colms_oflt_xe(argp))) return(0x00);
return(0x01);
}
