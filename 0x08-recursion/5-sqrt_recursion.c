#include "main.h"

/**
 * sqrt_helper - Recursive helper function to find the square root.
 * @n: The number for which to find the square root.
 * @guess: The current guess for the square root.
 *
 * Return: The square root of n, or -1 if n does not have a natural square root.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_helper(n, 0));
}

int sqrt_helper(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	if (guess * guess > n)
		return (-1);
	return (sqrt_helper(n, guess + 1));
}
