#include "main.h"

/**
 * puts2 - Prints every other character of a string followed by a new line.
 * @str: A pointer to a string.
 *
 * Description: This function takes a string pointer and prints every other
 * character of the string, starting with the first character, followed by a
 * new line.
 */

void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
