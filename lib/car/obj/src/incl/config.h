// # define __cdecl
# define COMPILING_ON_WSL_H // e.g., for WSL running on x86

# define global
# define external extern

# ifdef COMPILING_ON_WSL_H
# ifndef READY_FOR_COMPILING_ON_WSL_H
# define READY_FOR_COMPILING_ON_WSL_H
# define __cdecl __attribute__((ms_abi))
# endif
# endif

# ifdef STDLIB_H
# ifndef READY_FOR_STDLIB_H
# define READY_FOR_STDLIB_H
# include <stdlib.h>
# endif
# endif

# ifdef STDARG_H
# ifndef READY_FOR_STDARG_H
# define READY_FOR_STDARG_H
# include <stdarg.h>
# endif
# endif

# ifdef TIME_H
# ifndef READY_FOR_TIME_H
# define READY_FOR_TIME_H
# include <time.h>
# endif
# endif

# include "./car.h"
