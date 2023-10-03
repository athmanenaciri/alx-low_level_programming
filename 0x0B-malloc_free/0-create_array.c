#include "main.h"

/*
 *This C function, create_array, is designed
 *to dynamically allocate memory for an array
 *of characters of a specified size and initialize
 *all elements of the array with a given character c.
 *It helps in creating an array with a desired size
 *and initializing its contents to a specific character.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
		return (NULL);
	i = 0;
	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);
	while (i < size)
	{
		arr[i] = c;
		i++;
	}
	arr[i] = '\0';
	return (arr);
}
