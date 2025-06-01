/* Synopsis

Remove one word at the end of a line

Remarks
Refer at fn. cuev and/or cuet
*/


# define CAR_H
# include "./incl/config.h"

signed char *(__cdecl rm_by_wrd(signed char(*argp))) {
return(rm_by_wrd_r(rm_spa(argp)));
}
