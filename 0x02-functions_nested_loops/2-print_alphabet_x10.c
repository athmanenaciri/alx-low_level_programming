#include "main.h"

/**
 * print_alphabet_x10 - Prints the lowercase alphabet 10 times, each followed by a newline
 *
 * Description: This function uses nested loops to print the lowercase alphabet
 * 10 times, with each set of alphabets followed by a newline character.
 */

void print_alphabet_x10(void)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 26)
		{
			_putchar('a' + j);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
