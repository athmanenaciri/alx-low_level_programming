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
	int num1;
	int num2;

	num1 = 0;
	num2 = 1;

	while (num1 <= 98)
	{
		{
			putchar((num1 / 10) + '0');
			putchar((num1 % 10) + '0');
			putchar(' ');
			putchar((num2 / 10) + '0');
			putchar((num2 % 10) + '0');
			if (num1 != 98 || num2 != 99)
			{
				putchar(',');
				putchar(' ');
			}
			num2++;
		}
		num1++;
		num2 = num1 + 1;
	}
	putchar('\n');
	return (0);
}
