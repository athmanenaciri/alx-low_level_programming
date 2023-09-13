#include "main.h"

/**
 * print_sign - Prints the sign of a number (+, 0, or -)
 * @n: The number to be checked
 *
 * Description: This function checks the sign of the given integer 'n'
 * and prints either '+', '0', or '-' to represent the sign.
 *
 * Return: 1 if 'n' is positive, 0 if 'n' is zero, -1 if 'n' is negative.
 */

int print_sign(int n)
{
	if (n > 0)
		return(_putchar('+'), 1);
	else if (n == 0)
		return(_putchar('0'), 0);
	else
		return(_putchar('-'), -1);
}
