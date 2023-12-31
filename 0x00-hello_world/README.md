0. Preprocessor
-----------
Description:---------
-----------

This script runs a C file through the preprocessor and saves the result into another file.

Usage:

    Set the C file name in the variable $CFILE.
    Run the script, and it will generate the preprocessed output in a file named c.

1. Compiler
-----------
Description:---------
-----------

This script compiles a C file but does not link it.

Usage:

    Set the C file name in the variable $CFILE.
    Run the script, and it will generate an object file with the same name as the C file but with the .o extension.

2. Assembler
-----------
Description:---------
-----------

This script generates the assembly code of a C code and saves it in an output file.

Usage:

    Set the C file name in the variable $CFILE.
    Run the script, and it will produce an assembly file with the same name as the C file but with the .s extension.

3. Name
-----------
Description:---------
-----------

This script compiles a C file and creates an executable named cisfun.

Usage:

    Set the C file name in the variable $CFILE.
    Run the script, and it will compile the C file and create an executable named cisfun.

4. Hello, puts
-----------
Description:---------
-----------

This C program prints the text "Programming is like building a multilingual puzzle" using the puts function. It returns 0.

5. Hello, printf
-----------
Description:---------
-----------

This C program prints the text "with proper grammar, but the outcome is a piece of art," using the printf function. It returns 0.

6. Size is not grandeur, and territory does not make a nation
-----------
Description:---------
-----------

This C program prints the sizes of various data types on the computer where it is compiled and run. It provides output in a format similar to the example given and returns 0.

7. Intel
-----------
Description:---------
-----------

This script generates the assembly code (Intel syntax) of a C code and saves it in an output file. It's useful for inspecting the assembly-level details of your code.

------
shell ----------------
------

$ export CFILE=main.c
$ ./100-intel

8. UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity
-----------
Description:---------
-----------

This C program prints a specific message to the standard error without using common output functions like printf or puts. It demonstrates how to write to the standard error stream.

------
shell ----------------
------

$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -o quote 101-quote.c
$ ./quote

