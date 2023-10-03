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

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to a newly allocated space in memory containing the
 * concatenated string, or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *concatenated;
	int len1;
	int len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	concatenated = malloc(len1 + len2 + 1);
	if (concatenated == NULL)
		return (NULL);
	_strcpy(concatenated, s1);
	_strcat(concatenated, s2);
	return (concatenated);
}

