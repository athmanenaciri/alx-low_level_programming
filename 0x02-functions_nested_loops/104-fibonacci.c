#include "main.h"

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
	unsigned long sum;
	unsigned long j;
	unsigned long tmp;

	i = 0;
	sum = 1;
	j = 2;
	printf("%ld, %ld, ", sum, j);
	while (i < 96)
	{
		printf("%ld", (sum +j));
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
