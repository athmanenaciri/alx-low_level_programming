#include "function_pointers.h"

/**
 * array_iterator - Executes a function on each element of an array
 * @array: The array of integers
 * @size: The size of the array
 * @action: A pointer to the function to be used
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL)
	{
		size_t i = 0;

		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
