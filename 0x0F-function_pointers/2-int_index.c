#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array
 * @array: The array of integers
 * @size: The size of the array
 * @cmp: A pointer to the comparison function
 *
 * Return: Index of the first element for which cmp doesn't return 0, or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL)
	{
		i = 0;
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	}
	return (-1);
}
