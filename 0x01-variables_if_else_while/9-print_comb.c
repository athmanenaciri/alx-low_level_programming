#include <stdio.h>
/**
 * main - Entry point of the program.
 *
 * Description: This program prints all possible combinations of
 * single-digit numbers in ascending order, separated by commas and spaces.
 * It uses the putchar function to print each character individually.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int	i;

	i = 0;
	while (i < 10)
	{
		putchar(i + '0');
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
