#include "main.h"

/**
 * _puts - Prints a string followed by a new line to stdout.
 * @str: A pointer to a string.
 *
 * Description: This function takes a string pointer and prints each character
 * of the string followed by a new line to the standard output.
 */

void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}
