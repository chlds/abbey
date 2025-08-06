// # define __cdecl
# define global
# define external extern

// # define DBG_H
# define AL_H
# define COMPILING_ON_WSL_H // e.g., for WSL running on x86

# ifdef COMPILING_ON_WSL_H
# ifndef READY_FOR_COMPILING_ON_WSL_H
# define READY_FOR_COMPILING_ON_WSL_H
# define __cdecl __attribute__((ms_abi))
# define __sysv __attribute__((sysv_abi))
# endif
# endif

# ifdef DBG_H
# ifndef READY_FOR_DBG_H
# define READY_FOR_DBG_H
# include "./dbg.h"
# endif
# endif

# ifdef AL_H
# ifndef READY_FOR_AL_H
# define READY_FOR_AL_H
# include "./al.h"
# endif
# endif

# ifdef ARC_H
# include "./../arc/obj/src/incl/arc.h"
# endif

# ifdef CAR_H
# include "./../car/obj/src/incl/car.h"
# endif

# ifdef CAT_H
# include "./../cat/obj/src/incl/cat.h"
# endif

# ifdef STDIO_H
# include <stdio.h>
# endif

# ifdef STDLIB_H
# include <stdlib.h>
# endif

# ifdef STDARG_H
# include <stdarg.h>
# endif

# ifdef TIME_H
# include <time.h>
# endif

# ifdef ERRNO_H
# include <errno.h>
# endif

# ifdef FCNTL_H
# include <fcntl.h>
# endif

# ifdef LIMITS_H
# include <limits.h>
# endif

# ifdef LOCALE_H
# include <locale.h>
# endif

# ifdef SIGNAL_H
# include <signal.h>
# endif

# ifdef SYS_IOCTL_H
# include <sys/ioctl.h>
# endif

# ifdef SYS_TYPES_H
# include <sys/types.h>
# endif

# ifdef SYS_STAT_H
# include <sys/stat.h>
# endif

# ifdef TERMIOS_H
# include <termios.h>
# endif

# ifdef UNISTD_H
# include <unistd.h>
# endif

# ifdef WCHAR_H
# include <wchar.h>
# endif
