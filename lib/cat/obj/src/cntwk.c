# define CAR_H
# define CAT_H
# include "./../../../incl/config.h"

signed(__cdecl cntwk(signed(argt),signed(args),void(*argp))) {
auto signed r;
auto signed(__cdecl *c)(signed(args),void(*argp));
auto signed(__cdecl *(e[]))(signed(args),void(*argp)) = {
cntwk_sun,
cntwk_mon,
cntwk_tue,
cntwk_wed,
cntwk_thu,
cntwk_fri,
cntwk_sat,
0x00,
};
if(!argp) return(0x00);
if(argt<(0x00)) AND(argt,0x00);
r = cnt_e_xe(e);
if(!r) return(r);
argt = (argt%(r));
c = (*(argt+(e)));
return(c(args,argp));
}
