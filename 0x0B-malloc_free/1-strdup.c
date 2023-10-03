#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: A pointer to a string.
 *
 * Description: This function calculates and returns the length of a string
 * (the number of characters in the string) excluding the null terminator.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

/**
 * _strcpy - Copies a string from src to dest.
 * @dest: A pointer to the destination buffer.
 * @src: A pointer to the source string.
 * Return: A pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
	    i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * _strdup - Duplicate a string in dynamically allocated memory.
 * @str: The input string to duplicate.
 *
 * Return: A pointer to a new dynamically allocated string containing a
 * duplicate of the input string `str`, or NULL if memory allocation fails
 * or if `str` is NULL.
 */
char	*_strdup(char *str)
{
	char *duplicate;

	if (str == NULL)
		return (NULL);
	duplicate = malloc(_strlen(str) + 1);
	if (duplicate != NULL)
		_strcpy(duplicate, str);
	return (duplicate);
}
