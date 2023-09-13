#include "main.h"

#include "main.h"

/**
 * main - Entry point
 *
 * Description: Prints the first 98 Fibonacci numbers, separated by commas.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	unsigned long long sum;
	unsigned long long j;
	unsigned long long tmp;

	i = 0;
	sum = 1;
	j = 2;
	printf("%llu, %llu, ", sum, j);
	while (i < 96)
	{
		printf("%llu", (sum +j));
		if (i != 95)
			printf(", ");
		tmp = sum;
		sum = j;
		j = tmp + j;
		i++;
	}
	printf("\n");
	return (0);

}
