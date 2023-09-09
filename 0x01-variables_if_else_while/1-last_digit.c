#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * main - Entry point of the program.
 *
 * Description:
 * This program generates a random integer 'n',
 *	calculates its last digit 'num',
 * and then prints information about the last digit:
 * - If 'num' is 0, it prints that it's 0.
 * - If 'num' is less than 6 and not 0,
 *	it prints that it's less than 6 and not 0.
 * - If 'num' is greater than 5, it prints that
 *	it's greater than 5.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	num = n % 10;
	if (num == 0)
		printf("Last digit of %d is %d and is 0\n", n, num);
	else if (num != 0 && n < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, num);
	else if (num > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, num);
	return (0);
}
