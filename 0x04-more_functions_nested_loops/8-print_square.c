#include "main.h"
/**
 * print_square - Prints a square of a specified size using the character '#'.
 * @size: The size of the square.
 *
 * Description: If size is less than or equal to 0, it prints a new line.
 */
void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		i = 0;
		while (i < size)
		{
			j = 0;
			while (j < size)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
}
