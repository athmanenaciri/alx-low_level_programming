#include <stdio.h>

int main(void)
{
	int	i;
	char	c;

	i = 0;
	c = 48;
	while (i < 10)
	{
		putchar(c);
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
		c++;
		i++;
	}
	putchar('\n');
	return (0);
}
