#include "main.h"

/**
 * _calloc - Allocates memory for an array of elements.
 * @nmemb: Number of elements to allocate memory for.
 * @size: Size of each element in bytes.
 *
 * Return: A pointer to the allocated memory or NULL on failure.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	i = 0;
	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	while (i < nmemb * size)
	{
		ptr[i] = 0;
		i++;
	}
	return ((void *)ptr);
}
