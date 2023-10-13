#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Calculate the sum of all its parameters.
 * @n: The number of parameters.
 * @...: The parameters to be summed.
 *
 * Return: The sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int	i;
	va_list	args;
	int	sum;

	if (n == 0)
		return (0);
	i = 0;
	sum = 0;
	va_start(args, n);
	while (i < n)
	{
		sum += va_arg(args, int);
		i++;
	}
	va_end(args);
	return (sum);
}
