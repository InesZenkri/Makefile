# Getting started 
Try running `make` with no arguments. You should see the following:
```bash
$ make
> make: *** No targets specified and no makefile found.  Stop.
```
`make` is looking for a corresponding `Makefile` and didn't find one. Let's start by creating one!
# Basic Syntax and Structure of Makefiles
Makefiles are comprised of rules, targets, dependencies, and commands that instruct the make utility on how to build software.

# Targets and Dependencies
A Makefile consists of commands or "rules" that define **targets** and their **dependencies**. **Targets** are the output files generated by the Makefile.
**dependencies** are the files or commands needed to generate those targets.

```makefile
target: dependency1 dependency2
    command1
    command2

target: Represents the output file being generated.
dependency1 dependency2: Depicts the files or commands required to generate the target.
command1, command2: Shell commands used to generate the target from its dependencies.
```

# Rules and Indentation
Makefiles use indentation **TAB**to distinguish commands associated with a target.
**WARNING**: Makefiles are picky about spacing. Each line in a recipe must be prefixed by a `TAB` character. Four spaces don't work, it really needs to be tabs.
```makefile
clean:
    rm -f *.o main
in this example, the clean target removes object files (*.o) and the main executable when executed
```
# Comments
Comments in Makefiles start with # and are for explanatory purposes
```makefile
# This is a comment explaining the purpose of a rule
target: dependency
    command
```

Let's revisit the familiar gcc main.c -o main command we're all accustomed to.
> When compiling a C program like main.c, there are several steps involved before executing the program[ see more ](steps.md#steps)

In the [examples/first_step](examples/first_step)directory, a Makefile demonstrates this process. Start by executing:
```bash
$ gcc main.c -o main; ./main
> Our first Makefile !
```
which works as expected . Now try :
```bash
$ make; ./main
> Our first Makefile !
```
our first Makefile! And it's just one line :
```Makefile
main: main.c
#Cool XD
```

