#include <stdio.h>




/**
 * main - Entry point of the program.
 *
 * Description:
 * This program prints the lowercase letters from 'a' to 'z' using a loop.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	char c;

	i = 0;
	c = 97;
	while (i < 26)
	{
		putchar(c);
		c++;
		i++;
	}
	putchar('\n');
	return (0);
}
