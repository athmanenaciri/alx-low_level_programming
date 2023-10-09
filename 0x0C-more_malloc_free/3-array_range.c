#include "main.h"

/**
 * array_range - Creates an array of integers from min to max (inclusive).
 * @min: The minimum value (included) for the array.
 * @max: The maximum value (included) for the array.
 *
 * Return: A pointer to the newly created array or NULL on failure.
 */
int *array_range(int min, int max)
{
	int *arr;
	int size;
	int i;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}
