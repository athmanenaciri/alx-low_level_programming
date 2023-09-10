#include <stdio.h>
/**
 * main - Entry point of the program.
 *
 * Description: This program prints all possible different combinations of
 * two digits in ascending order, separated by commas and spaces.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int	i;
	int	a;
	int	b;

	i = 0;
	a = 0;
	b = 1;
	while (a <= 8)
	{
		if (b <= 9)
		{
			putchar(a + '0');
			putchar(b + '0');
			if (a != 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
		else
		{
			a++;
			b = a;
		}
		b++;
		i++;
	}
	putchar('\n');
	return (0);
}
