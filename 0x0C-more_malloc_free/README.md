Description
This repository (0x0C-more_malloc_free) contains a set of C programming tasks related to memory allocation using malloc, free, calloc, and other functions. These tasks are part of the curriculum at ALX School and are designed to help you improve your understanding of memory management in C.

Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

General
    How to use the exit function
    What are the functions calloc and realloc from the standard library and how to use them

Tasks
Task 0: Trust no one

Write a function that allocates memory using malloc.

    Prototype: void *malloc_checked(unsigned int b);
    Returns a pointer to the allocated memory
    If malloc fails, the malloc_checked function should cause normal process termination with a status value of 98

Task 1: string_nconcat

Write a function that concatenates two strings.

    Prototype: char *string_nconcat(char *s1, char *s2, unsigned int n);
    The returned pointer shall point to a newly allocated space in memory, which contains s1, followed by the first n bytes of s2, and null-terminated
    If the function fails, it should return NULL
    If n is greater or equal to the length of s2, then use the entire string s2
    If NULL is passed, treat it as an empty string

Task 2: _calloc

Write a function that allocates memory for an array, using malloc.

    Prototype: void *_calloc(unsigned int nmemb, unsigned int size);
    The _calloc function allocates memory for an array of nmemb elements of size bytes each and returns a pointer to the allocated memory.
    The memory is set to zero
    If nmemb or size is 0, then _calloc returns NULL
    If malloc fails, then _calloc returns NULL
