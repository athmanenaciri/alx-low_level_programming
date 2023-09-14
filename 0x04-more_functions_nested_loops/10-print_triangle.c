#include "main.h"

/**
 * print_triangle - Prints a triangle of a specified size using '#'.
 * @size: The size of the triangle.
 *
 * Description: If size is 0 or less, it prints a new line.
 */

void print_triangle(int size)
{
	int i;
	int j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		i = 1;
		while (i <= size)
		{
			j = 1;
			while (j <= size)
			{
				if (j <= size - i)
					_putchar(' ');
				else
					_putchar('#');
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
}
