#include <stdio.h>
/**
 * main - Entry point of the program.
 *
 * Description:
 * This program prints a sequence of lowercase
 *	letters excluding 'e' and 'q'.
 * It starts with the letter 'a' and continues
 *	until 24 characters are printed,
 * avoiding 'e' and 'q'. The result is followed
 *	by a newline character.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char c;

	i = 0;
	c = 97;
	while (i < 24)
	{
		if (c == 'e' || c == 'q')
			c++;
		putchar(c);
		c++;
		i++;
	}
	putchar('\n');
	return (0);
}
