#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>
#include <stdio.h>

/**
 * struct listint_s - singly linked list
 * @n: Integer (data)
 * @next: Pointer to the next node
 *
 * Description: singly linked list node structure
 * for integers.
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);

#endif /* LISTS_H */
