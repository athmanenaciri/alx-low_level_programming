#include "main.h"

/**
 * print_array - Prints n elements of an array
 *	of integers followed by a new line.
 * @a: A pointer to an array of integers.
 * @n: The number of elements to print.
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
		i++;
	}
	printf("\n");
}
