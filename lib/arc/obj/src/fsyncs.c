# define ARC_H
# define UNISTD_H
# include "./../../../incl/config.h"

signed(__cdecl fsyncs(signed(arg))) {
return(fsync(arg));
}
