#include "main.h"


/**
 * The _sqrt_recursion function returns the natural square root 
 *	of a given number n.
 *	If n does not have a natural square root,
 *	the function returns -1. This implementation uses a single
 *	function and a loop to find the square root.
 */

int _sqrt_recursion(int n)
{
	int guess;

	if (n < 0)
		return -1;
	if (n == 0 || n == 1)
		return n;
	guess = 1;
	while (guess * guess <= n)
	{
		if (guess * guess == n)
			return (guess);
		guess++;
	}
	return (-1);
}
