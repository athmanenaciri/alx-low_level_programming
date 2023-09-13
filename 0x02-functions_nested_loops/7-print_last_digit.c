#include "main.h"


int print_last_digit(int num)
{
	if (num < 0)
		num *= -1;
	_putchar((num % 10) + '0');
	return (num % 10);
}
