# abbey

## Please verify the code and use it if you'd like.

### Building a library for WSL running on x86-64
A library based on UTF-8  

### Making abbey/lib/libabbey.a
$ make  

### Building an executable file manually
$ gcc -c FILE.c  
$ gcc -o OUTPUT FILE.o abbey/lib/libabbey.a  

### Including a config file for header files
Dev Path: abbey/lib/incl/config.h  
Pub Path: abbey/incl/abbey.h // Please add the functions you require to abbey/incl/abbey_f.h.  

## Installation/Uninstallation

### Installing the library
`$ make`  
Root privileges may be required to install the library.  
`$ sudo make install`  

### Uninstalling the library
Root privileges may be required to uninstall the library.  
`$ sudo make uninstall`  

## Usage

### Include the header
Begin by including the appropriate header in your C source file.  
`# include <abbey/abbey.h>`  

### Compile
Compile the source file.  
`gcc -c FILE.c`  

### Link
Then link the resulting object file against the library.  
`gcc FILE.o -labbey`  
If all has gone to plan, you should now have a working executable.  

## Commentary

### Variadic functions
Any of the variadic functions in the library that return a single pointer containing the addresses of multiple character pointers must end its arguments with a NULL pointer.  
Any of the variadic functions in the library that return a single pointer containing the addresses of multiple integer pointers shall include in the first argument the number of its arguments to be entered from the second argument.  

### Coding Guidelines
Local variables are named using a single letter.  
Functions are named using word abbreviations.  
In principle, but there are exceptions.  

### Remarks
**Please note that the library is currently under construction and may be subject to frequent and significant changes.**  
