#include "main.h"

/**
 * main - Entry point
 *
 * Description:
 * This program calculates and prints the largest prime factor of the number
 * 612852475143. A prime factor is a prime number that divides a given number
 * evenly. The largest prime factor is the largest prime number among the
 * factors of the given number.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long i;
	long number;
	long bigPrime;

	i = 2;
	number = 612852475143;
	bigPrime = 1;
	while (i <= number)
	{
		while (number % i == 0)
		{
			bigPrime = i;
			number = number / i;
		}
		i++;
	}
	printf("%ld\n", bigPrime);
	return (0);
}
