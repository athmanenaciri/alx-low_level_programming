#include "main.h"
/**
 * main - Entry point for FizzBuzz program.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 5 == 0)
			printf("Buzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else
			printf("%d", i);
		if (i != 100)
            printf(" ");
		i++;
	}
	return (0);
}
