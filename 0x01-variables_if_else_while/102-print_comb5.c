#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Description: This program prints all possible combinations of two two-digit
 * numbers in ascending order, separated by a comma and space. It ensures that
 * all numbers are printed with two digits.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int b;

	a = 0;
	b = 1;

	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			putchar((a / 10) + '0');
			putchar((a % 10) + '0');
			putchar(' ');
			putchar((b / 10) + '0');
			putchar((b % 10) + '0');
			if (a != 98 || b != 99)
			{
				putchar(',');
				putchar(' ');
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
