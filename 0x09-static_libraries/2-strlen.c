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
