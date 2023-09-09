#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Description: This program prints all
 *	the numbers of base 16 in lowercase,
 *	followed by a new line. It uses
 *	the putchar function to print
 *	each character individually.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int	i;
	char	c;

	i = 0;
	c = 48;
	while (i < 10)
	{
		putchar(c);
		c++;
		i++;
	}
	i = 0;
	c = 97;
	while (i < 6)
	{
		putchar(c);
		c++;
		i++;
	}
	putchar('\n');
	return (0);
}
