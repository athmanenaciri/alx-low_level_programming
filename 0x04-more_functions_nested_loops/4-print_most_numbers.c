#include "main.h"

/**
 * print_numbers - Prints the numbers from 0 to 9 followed by a new line.
 */
void print_most_numbers(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		if(i != 4 && i != 2)
		{
			_putchar('0' + i);
		}
		i++;
	}
	_putchar('\n');
}
