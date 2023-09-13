#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer
 */

void jack_bauer(void)
{
	int a;
	int b;
	int c;
	int d;

	a = 0;
	b = 0;
	c = 0;
	d = 0;
	while (a < 3)
	{
		b = 0;
		while (b < 10)
		{
			c = 0;
			while (c < 6)
			{
				d = 0;
				while (d < 10)
				{
					if (!(a == 2 && b > 3))
					{
						_putchar(a + '0');
						_putchar(b + '0');
						_putchar(':');
						_putchar(c + '0');
						_putchar(d + '0');
						_putchar('\n');
					}
					d++;
				}
				c++;
			}
			b++;
		}
		a++;
	}
}
