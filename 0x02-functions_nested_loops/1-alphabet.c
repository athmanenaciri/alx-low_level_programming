#include "main.h"
/**
 * print_alphabet - Prints the lowercase alphabet followed by a newline
 *
 * Description: This function uses a while loop to print the lowercase alphabet
 * characters from 'a' to 'z', followed by a newline character.
 */

void print_alphabet(void)
{
	int i ;

	i = 0;
	while (i < 26)
	{
		_putchar('a' + i);
		i++;
	}
	_putchar('\n');
}
