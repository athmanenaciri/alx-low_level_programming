#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * @num: The integer to calculate the absolute value of
 *
 * Description: This function computes the absolute value of the given integer 'num'.
 *
 * Return: The absolute value of 'num'.
 */


int _abs(int num)
{
	if (num < 0)
		return (num * -1);
	else
		return (num);
}
