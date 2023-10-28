#include "main.h"

/**
 * flip_bits - Returns the number of bits needed to flip from one number to another.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: Number of bits needed to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int res;
	unsigned int count;

	res = n ^ m;
	count = 0;
	while (res > 0)
	{
		count += res & 1;
		res >>= 1;
	}
	return (count);
}
