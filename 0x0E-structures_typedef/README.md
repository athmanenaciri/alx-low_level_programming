0x0E - C Structures and Typedef

Welcome to the 0x0E directory! Here, you will find a collection of C programs and tasks that focus on working with structures and typedef. This directory is part of the ALX Low-Level Programming curriculum and is created by Julien Barbier.
Project Overview

In this project, you will work with C structures and typedef. The main goal is to help you understand how to define and use structures in C, as well as create custom types using typedef.
Requirements

Here are some general requirements for this project:

    Allowed editors: vi, vim, emacs
    All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options: -Wall -Werror -Wextra -pedantic -std=gnu89
    All your files should end with a new line.
    A README.md file, located at the root of the project folder, is mandatory.
    Your code should use the Betty style, and it will be checked using betty-style.pl and betty-doc.pl.
    You are not allowed to use global variables.
    You can only use the following C standard library functions: printf, malloc, free, and exit.
    Your header files should be include guarded to prevent double inclusion.

Tasks

Task 0: Poppy
Mandatory
Define a new type struct dog with the following elements:

    name, type: char *
    age, type: float
    owner, type: char *


Task 1: A dog is the only thing on earth that loves you more than you love yourself
Mandatory
Write a function that initializes a variable of type struct dog.
Prototype: void init_dog(struct dog *d, char *name, float age, char *owner);


Task 2: A dog will teach you unconditional love. If you can have that in your life, things won't be too bad
Mandatory
Write a function that prints a struct dog.
Prototype: void print_dog(struct dog *d);


Task 3: Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read
Mandatory
Define a new type dog_t as a new name for the type struct dog.
