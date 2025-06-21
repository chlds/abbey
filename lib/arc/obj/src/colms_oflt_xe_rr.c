# define ARC_H
# define WCHAR_H
# define _XOPEN_SOURCE
# include "./../../../incl/config.h"

signed(__cdecl colms_oflt_xe_rr(signed(*argp))) {
auto signed r;
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
r = wcwidth(*argp);
return(r+(colms_oflt_xe_rr(++argp)));
}
