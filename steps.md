# Preprocessing (main.i)

The C preprocessor (cpp) first processes the code in main.c, handling directives like **#include** and **#define**, and generates an intermediate file **main.i** with expanded code.

# Compilation (main.s)

The compiler (gcc) then translates the preprocessed file **main.i** into assembly code **main.s**. This file contains human-readable assembly instructions corresponding to the C code.

# Assembly (main.o)

The assembler (as) converts the assembly code **main.s** into machine code or object code **main.o**. This file contains binary instructions specific to the target architecture.

# Linking (Executable)

Finally, the linker (ld) combines the object file **main.o** with other necessary object files and libraries to create an executable file **main** or **main.exe**. This executable file is ready to be run.