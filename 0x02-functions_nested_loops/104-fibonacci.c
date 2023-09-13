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
	unsigned int sum;
	unsigned int j;
	unsigned int tmp;

	i = 0;
	sum = 1;
	j = 2;
	printf("%u, %u, ", sum, j);
	while (i < 96)
	{
		printf("%u", (sum +j));
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
