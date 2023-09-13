#include "main.h"

/**
 * main - Entry point
 *
 * Description: Finds and prints the sum of even-valued terms in the Fibonacci
 * sequence whose values do not exceed 4,000,000.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long sum;
	long prev;
	long current;
	long next;

	sum = 0;
	prev = 1;
	current = 2;
	while (current <= 4000000)
	{
		if (current % 2 == 0)
			sum += current;
		next = prev + current;
		prev = current;
		current = next;
	}
	printf("%ld\n", sum);
	return (0);
}
