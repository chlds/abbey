# define CAR_H
# define CAT_H
# include "./../../../incl/config.h"

signed(__cdecl cat_on_carryover_in_ll(signed(args/*dm*/),signed(argp/*mo*/))) {
auto signed r;
auto signed a[] = {
CAT_H_IDVS_ON_FULL_MOON,
CAT_H_IDVS_ON_HOLLOW_MOON,
0x00,
};
if(!(0x00<(args))) return(0x00);
if(argp<(0x00)) return(0x00);
r = cat_on_moon_in_ll(argp);
if(!r) return(r);
r = (r%(ct_u(a)));
r = (*(r+(a)));
if(!(r<(args))) return(0x00);
return(0x01);
}
