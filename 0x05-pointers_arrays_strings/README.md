# Project 0x05 - Pointers, Arrays, and Strings

Welcome to Project 0x05 - Pointers, Arrays, and Strings. This project will help you solidify your understanding of pointers, arrays, and strings in the C programming language. It consists of several tasks, each focused on different aspects of these concepts.

## Learning Objectives

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

- What are pointers and how to use them
- What are arrays and how to use them
- What are the differences between pointers and arrays
- How to use strings and how to manipulate them
- Scope of variables

## Requirements

- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using `betty-style.pl` and `betty-doc.pl`
- You are not allowed to use global variables
- No more than 5 functions per file
- You are not allowed to use the standard library. Any use of functions like `printf`, `puts`, etc… is forbidden
- You are allowed to use `_putchar`
- You don’t have to push `_putchar.c`, we will use our file. If you do it won’t be taken into account
- In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `main.h`
- Don’t forget to push your header file

You do not need to learn about pointers to functions, pointers to pointers, multidimensional arrays, arrays of structures, `malloc`, and `free` - yet.

## Tasks

### Task 0: 98 Battery St.

Write a function that takes a pointer to an `int` as a parameter and updates the value it points to to `98`.

- Prototype: `void reset_to_98(int *n);`

### Task 1: Don't swap horses in crossing a stream

Write a function that swaps the values of two integers.

- Prototype: `void swap_int(int *a, int *b);`

### Task 2: This report, by its very length, defends itself against the risk of being read

Write a function that returns the length of a string.

- Prototype: `int _strlen(char *s);`

### Task 3: I do not fear computers. I fear the lack of them

Write a function that prints a string, followed by a new line, to stdout.

- Prototype: `void _puts(char *str);`

### Task 4: I can only go one way. I've not got a reverse gear

Write a function that prints a string, in reverse, followed by a new line.

- Prototype: `void print_rev(char *s);`

### Task 5: A good engineer thinks in reverse and asks himself about the stylistic consequences of the components and systems he proposes

Write a function that reverses a string.

- Prototype: `void rev_string(char *s);`

### Task 6: Half the lies they tell about me aren't true

Write a function that prints every other character of a string, starting with the first character, followed by a new line.

- Prototype: `void puts2(char *str);`

### Task 7: Winning is only half of it. Having fun is the other half

Write a function that prints half of a string, followed by a new line.

- Prototype: `void puts_half(char *str);`

### Task 8: Arrays are not pointers

Write a function that prints `n` elements of an array of integers, followed by a new line.

- Prototype: `void print_array(int *a, int n);`

### Task 9: strcpy

Write a function that copies the string pointed to by `src`, including the terminating null byte (`\0`), to the buffer pointed to by `dest`.

- Prototype: `char *_strcpy(char *dest, char *src);`
