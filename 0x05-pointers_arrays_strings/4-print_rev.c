#include "main.h"
/**
 * print_rev - Prints a string in reverse followed by a new line.
 * @s: A pointer to a string.
 *
 * Description: This function takes a string pointer and prints the characters
 * of the string in reverse order, followed by a new line,
 *	to the standard output
 */

void print_rev(char *s)
{
	int i;

	i = strlen(s);
	while (i--)
		_putchar(s[i]);
	_putchar('\n');
}
