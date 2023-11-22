Frequently, our programs consist of multiple files. Consider compiling numerous `.c` and `.h` files into a single executable. Here, object files (`.o`) prove incredibly useful. By constructing rules to generate intermediate `.o` files and creating a comprehensive "master" rule that combines or links these object files, we streamline the compilation process.

This is how our Makefile would like in this case :

