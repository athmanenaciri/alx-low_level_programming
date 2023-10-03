# 0x0B. C - malloc, free

## Overview

This repository contains solutions to the projects and tasks related to memory allocation and deallocation in the C programming language. The primary focus of this project is to understand and practice concepts related to dynamic memory allocation using `malloc` and memory deallocation using `free`.

## Table of Contents

1. [Description](#description)
2. [Concepts](#concepts)
3. [Learning Objectives](#learning-objectives)
4. [Requirements](#requirements)
5. [Tasks](#tasks)

## Description

This project involves creating C functions that perform various memory-related tasks using dynamic memory allocation. The tasks include functions to create arrays, duplicate strings, concatenate strings, and allocate 2-dimensional grids. Additionally, there is a function to free memory allocated by the grid allocation function.

## Concepts

In this project, we focus on the following concepts:

- Automatic and dynamic allocation
- `malloc` and `free` functions

## Learning Objectives

By the end of this project, you should be able to:

- Understand the difference between automatic and dynamic memory allocation.
- Use `malloc` and `free` functions to allocate and deallocate memory dynamically.
- Know when and why to use `malloc`.
- Use `valgrind` to check for memory leaks in your programs.

## Requirements

- Allowed editors: vi, vim, emacs
- All code will be compiled on Ubuntu 20.04 LTS using `gcc` with the following flags: `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All code files should end with a new line.
- A `README.md` file, like this one, must be present at the root of the project folder.
- Code should follow the Betty style, checked using `betty-style.pl` and `betty-doc.pl`.
- Global variables are not allowed.
- Each C file should contain no more than 5 functions.
- The only C standard library functions allowed are `malloc` and `free`. Functions like `printf`, `puts`, `calloc`, `realloc`, etc., are forbidden.
- You can use `_putchar`, but you don't need to push `_putchar.c`. It will be provided.
- The prototypes of all functions and `_putchar` should be included in the header file called `main.h`. Don't forget to push your header file.
- You do not need to learn about `calloc` and `realloc`.

## Tasks

The project includes the following tasks:

- [Float like a butterfly, sting like a bee](./0-create_array.c)
- [The woman who has no imagination has no wings](./1-strdup.c)
- [If you even dream of beating me you'd better wake up and apologize](./2-str_concat.c)
- [It's not bragging if you can back it up](./3-alloc_grid.c)
- [If you even dream of beating me you'd better wake up and apologize](./4-free_grid.c)

