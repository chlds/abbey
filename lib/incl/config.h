// # define __cdecl
# define global
# define external extern

# define AL_H
# define COMPILING_ON_WSL_H // e.g., for WSL running on x86

# ifdef COMPILING_ON_WSL_H
# ifndef READY_FOR_COMPILING_ON_WSL_H
# define READY_FOR_COMPILING_ON_WSL_H
# define __cdecl __attribute__((ms_abi))
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

# ifdef FCNTL_H
# include <fcntl.h>
# endif

# ifdef SYS_IOCTL_H
# include <sys/ioctl.h>
# endif

# ifdef TERMIOS_H
# include <termios.h>
# endif

# ifdef UNISTD_H
# include <unistd.h>
# endif
