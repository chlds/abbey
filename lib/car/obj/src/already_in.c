/* Synopsis

Already in existence
*/


# define CAR_H
# define ERRNO_H
# define SYS_TYPES_H
# define SYS_STAT_H
# include "./../../../incl/config.h"

signed(__cdecl already_in(signed char(*argp))) {
auto struct stat s;
if(!argp) return(0x00);
if(!(0x01+(stat(argp,&s)))) return(0x00);
return(0x01);
}
