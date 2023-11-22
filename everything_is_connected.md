# One more last step XD

Let's create a few simple C file that performs arithmetic operations, and with uses separate files for functions (add and subtract) and a main file (main.c). The Makefile manages the compilation and linking of these files into an executable program that performs simple arithmetic operations. 

**This is how our Makefile looks like :**
```bash
CC = gcc
CFLAGS = -Wall 

OBJECTS = addition.o subtraction.o main.o
EXEC = main


all: $(EXEC)

$(EXEC): $(OBJECTS)
	$(CC) $(CFLAGS) -o $(EXEC) $(OBJECTS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean

clean:
	rm -f $(OBJECTS) $(EXEC)

```
> `EXEC = main`: Specifies the name of the final executable that will be generated.

> `all: $(EXEC)`: Defines the default target all, specifying that the EXEC target should be built when running **make** without any arguments.

> `%.o: %.c`: This line specifies a pattern rule where **%** is a wildcard that matches any sequence of characters. It says that for any file ending with **.o** as a target and a corresponding **.c** file as a prerequisite, this rule applies.

> `$(CC) $(CFLAGS) -c $< -o $@`: Compilation command for generating object files from C source files.
    * `-c`: Indicates that the compiler should generate object files rather than executables.
    * `$<`: Automatic variable representing the first prerequisite (the .c file).
    * `-o $@`: Indicates the output file (the .o file). `$@` is an automatic variable representing the target.
- - - 
**Now let's compile it :**
```bash
    $ make 
    > gcc -Wall -c addition.c -o addition.o
    > gcc -Wall -c subtraction.c -o subtraction.o
    > gcc -Wall -c main.c -o main.o
    > gcc -Wall -o main addition.o subtraction.o main.o
    $ ./main
    > Addition: 15
    > Subtraction: 5
```

**If we want afterwards to delete the files :**

```bash 
    $ make clean
    >rm -f addition.o subtraction.o main.o main
```
- - - 
**What if you don't want the terminal to display the commands while compiling?**

You can use the `@` symbol at the beginning of the command lines in your Makefile. This suppresses the display of the commands themselves while they're being executed.
```bash 
CC = gcc
CFLAGS = -Wall 

OBJECTS = addition.o subtraction.o main.o
EXEC = main

all: $(EXEC)

$(EXEC): $(OBJECTS)
	@$(CC) $(CFLAGS) -o $(EXEC) $(OBJECTS)

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean

clean:
	@rm -f $(OBJECTS) $(EXEC)

```
And if you compile it :
```bash
$ make

#You get nothing XD, i advise you not to do it,so you have a trace on the compilation process.
```

