#include <stdio.h>
/**
 * main - Entry point of the program.
 *
 * Description: This program prints all possible different combinations of
 * three digits in ascending order, separated by commas and spaces.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	b = 1;
	c = 2;
	while (a <= 7 && b <= 8 && c <= 9)
	{
		putchar(a + '0');
		putchar(b + '0');
		putchar(c + '0');
		if (a != 7)
		{
			putchar(',');
			putchar(' ');
		}
		if (b == 8)
		{
			a++;
			b = a + 1;
			c = b;
		}
		if (c == 9)
		{
			b++;
			c = b;
		}
		c++;
	}
	putchar('\n');
	return (0);
}
