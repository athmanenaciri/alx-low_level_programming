#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string to be concatenated.
 *
 * Description: This function appends the `src` string to the `dest` string,
 * overwriting the terminating null byte ('\0') at the end of `dest`, and then
 * adds a terminating null byte.
 *
 * Return: A pointer to the resulting string `dest`.
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
