#include "main.h"

/**
 * _strncat - Concatenates two strings with a limit.
 * @dest: The destination string.
 * @src: The source string to be concatenated.
 * @n: The maximum number of bytes to concatenate from src.
 *
 * Description: This function appends at most `n` bytes from the `src` string to
 * the `dest` string, overwriting the terminating null byte ('\0') at the end
 * of `dest`, and then adds a terminating null byte.
 *
 * Return: A pointer to the resulting string `dest`.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j] && j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
