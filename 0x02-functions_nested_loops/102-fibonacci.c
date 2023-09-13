#include "main.h"
/**
 * main - Entry point
 *
 * Description: Prints the first 50 Fibonacci numbers
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
	printf("%ld, %ld, ", sum, j);
	while (i < 48)
	{
		printf("%ld", (sum + j));
		if (i != 47)
			printf(", ");
		tmp = sum;
		sum = j;
		j = tmp + j;

		i++;
	}
	printf("\n");
	return (0);
}
