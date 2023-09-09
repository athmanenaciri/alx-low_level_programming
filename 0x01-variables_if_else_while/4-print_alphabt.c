#include <stdio.h>

int main(void)
{
	int i;
	char c;
	i = 0;
	c = 97;
	while (i < 24)
	{
		if(c == 'e' || c == 'q')
			c++;
		putchar(c);
		c++;
		i++;
	}
	putchar('\n');
	return(0);
}
