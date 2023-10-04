
#include "main.h"

/* write a char using write function */

int	_putchar(char	c)
{
	write(1, &c, 1);
	return (1);
}
