#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point of the program
 * declare a variable type int named n
 * //
 * //
 * check if n is equaled to 0 then print %d (the number)
 *	is zero followed by a new line (\n) using printf function
 * if not equals to zero check if it's less print %d (the number)
 *	is negative followed by a new line (\n) using printf function
 * if not equals to zero or less then it is 100% positive
 *	number so print %d (the number) is positive
 *	followed by a new line (\n) using printf function
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is positive\n", n);

	return (0);
}
