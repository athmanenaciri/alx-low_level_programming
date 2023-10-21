0x12. Singly Linked Lists

This directory contains C programs and functions related to singly linked lists, a fundamental data structure in computer science. The projects in this directory are part of the ALX Low-Level Programming curriculum.
List of Files

    0-print_list.c: This file contains a function that prints all the elements of a list_t list. The function returns the number of nodes in the list. If a string is NULL, it prints "[0] (nil)".

    1-list_len.c: This file contains a function that returns the number of elements in a list_t list.

    2-add_node.c: This file contains a function that adds a new node at the beginning of a list_t list. The function returns the address of the new element or NULL if it fails. It duplicates the string provided.

    3-add_node_end.c: This file contains a function that adds a new node at the end of a list_t list. The function returns the address of the new element or NULL if it fails. It duplicates the string provided.

    4-free_list.c: This file contains a function that frees a list_t list, releasing all the allocated memory.

How to Compile and Run

To compile the programs, use the following format:

shell

gcc -Wall -pedantic -Werror -Wextra -std=gnu89 <main_file.c> <function_file.c> -o <output_name>

