#include "main.h"

/**
 * _memset - Fills memory with a constant byte.
 * @s: A pointer to the memory area to be filled.
 * @b: The value (byte) to be set.
 * @n: The number of bytes to be set to the value b.
 *
 * Return: A pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
