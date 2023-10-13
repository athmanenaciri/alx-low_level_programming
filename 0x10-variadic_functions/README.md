# 0x10. C - Variadic functions

## Overview

This project is part of ALX's low-level programming curriculum and focuses on variadic functions in C. Variadic functions allow a function to accept a variable number of arguments. The project aims to teach you the basics of working with variadic functions and how to use macros like `va_start`, `va_arg`, and `va_end`. Additionally, you'll learn about the `const` type qualifier.

## Project Description

In this project, you will create a series of functions to perform various tasks using variadic functions. The project includes the following tasks:

1. **Beauty is variable, ugliness is constant**
   - Write a function that returns the sum of all its parameters.
   - Prototype: `int sum_them_all(const unsigned int n, ...);`
   - If `n` is equal to 0, the function should return 0.

2. **To be is to be the value of a variable**
   - Write a function that prints numbers, followed by a new line.
   - Prototype: `void print_numbers(const char *separator, const unsigned int n, ...);`
   - You are allowed to use `printf`.
   - If `separator` is `NULL`, don't print it.

3. **One woman's constant is another woman's variable**
   - Write a function that prints strings, followed by a new line.
   - Prototype: `void print_strings(const char *separator, the const unsigned int n, ...);`
   - You are allowed to use `printf`.
   - If `separator` is `NULL`, don't print it.
   - If one of the strings is `NULL`, print `(nil)` instead.

4. **To be is a to be the value of a variable**
   - Write a function that prints anything based on a given format.
   - Prototype: `void print_all(const char * const format, ...);`
   - The format is a list of types of arguments passed to the function: 'c' for char, 'i' for integer, 'f' for float, 's' for string (if the string is `NULL`, print `(nil)` instead), and any other character should be ignored.
   - You are not allowed to use `for`, `goto`, ternary operators, `else`, `do...while`.
   - You can use a maximum of two `while` loops, two `if` statements, and declare a maximum of nine variables.
   - You are allowed to use `printf`.
   - Print a new line at the end of your function.

## Project Requirements

[Please add the project requirements as needed for your specific project.]

## Learning Objectives

By the end of this project, you are expected to be able to explain to anyone, without the help of Google:

- What are variadic functions
- How to use `va_start`, `va_arg`, and `va_end` macros
- Why and how to use the `const` type qualifier

## Requirements and Usage

- This project requires you to create a series of C files containing the functions for the tasks described above.
- You can compile your code using the provided compile commands for each task.
- The provided `main.c` files are examples that you can use to test your functions, but you don't have to push them to your repo.
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `variadic_functions.h`.
- Make sure to follow the given guidelines, including coding style and formatting.

