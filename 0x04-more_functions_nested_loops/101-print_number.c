#include "main.h"


/**
 * print_number - Prints an integer.
 * @n: The integer to print.
 *
 * Description: This function prints the integer `n` to the standard output.
 * It uses recursion to extract and print each digit of the integer.
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	if (n / 10 != 0)
		print_number(n / 10);
	_putchar('0' + n % 10);
}
