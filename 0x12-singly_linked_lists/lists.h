#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <stdio.h>

/**
 * struct list_s - Singly linked list structure
 * @str: String (node data)
 * @len: Length of the string
 * @next: Points to the next node
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t list_len(const list_t *h);

#endif
