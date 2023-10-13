# 0x0F. C - Function pointers

## Description
This project is part of the ALX low-level programming curriculum and focuses on function pointers in C.

## Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

- What are function pointers and how to use them
- What does a function pointer exactly hold
- Where does a function pointer point to in the virtual memory

## Requirements
- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are malloc, free, and exit. Any use of functions like printf, puts, calloc, realloc, etc., is forbidden
- You are allowed to use _putchar
- You don’t have to push _putchar.c, we will use our file. If you do, it won’t be taken into account
- In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
- The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called function_pointers.h
- Don’t forget to push your header file
- All your header files should be include guarded

## Tasks

### 0. What's my name
Write a function that prints a name.
- Prototype: void print_name(char *name, void (*f)(char *));

### 1. If you spend too much time thinking about a thing, you'll never get it done
Write a function that executes a function given as a parameter on each element of an array.
- Prototype: void array_iterator(int *array, size_t size, void (*action)(int));

### 2. To hell with circumstances; I create opportunities
Write a function that searches for an integer.
- Prototype: int int_index(int *array, int size, int (*cmp)(int));

### 3. A goal is not always meant to be reached, it often serves simply as something to aim at
Write a program that performs simple operations.
- Usage: calc num1 operator num2
- The program prints the result of the operation, followed by a new line
- You can assume that the result of all operations can be stored in an int
- if the number of arguments is wrong, print Error, followed by a new line, and exit with the status 98
- if the operator is none of the above, print Error, followed by a new line, and exit with the status 99
- if the user tries to divide (/ or %) by 0, print Error, followed by a new line, and exit with the status 100

