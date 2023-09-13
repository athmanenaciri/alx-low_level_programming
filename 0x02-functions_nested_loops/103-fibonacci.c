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
	int i;
	long sum;
	long j;
	long tmp;

	i = 0;
	sum = 1;
	j = 2;
	printf("2\n");
	while (sum <= 4000000)
	{
		if ((sum + j) % 2 == 0)
			printf("%ld\n", (sum + j));
		tmp = sum;
		sum = j;
		j = tmp + j;

		i++;
	}
	return (0);
}
