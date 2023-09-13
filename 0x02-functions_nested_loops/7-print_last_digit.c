#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number
 * @num: The number to extract the last digit from
 *
 * Description: This function calculates and prints
 *	the last digit of the given integer 'num'.
 *
 * Return: The last digit of 'num'.
 */

int print_last_digit(int num)
{
	if (num == INT_MIN)
		return (_putchar(8 + '0'), 8);
	else if (num < 0)
		num *= -1;
	_putchar((num % 10) + '0');
	return (num % 10);
}
