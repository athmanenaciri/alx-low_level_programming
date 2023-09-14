#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal.
 * @n: The number of times the character '\' should be printed.
 */

void print_diagonal(int n)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (n <= 0)
		_putchar('\n');
	else
	{
		while (i < n)
		{
			j = 0;
			while (j < i)	
			{
				_putchar(' ');
				j++;
			}
			_putchar('\\');
			_putchar('\n');
			i++;
		}
		_putchar('\n');
	}
}
