#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A string containing 0s and 1s.
 *
 * Return: The converted unsigned int or 0 if an error occurs.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result;
	int i;

	if (b == NULL)
		return (0);

	i = 0;
	result = 0
	while (b[i])
	{
		if (b[i] == '0' || b[i] == '1')
		{
			result = result << 1;
			if (b[i] == '1')
				result += 1;
			i++;
		}
		else
			return (0);
	}
	return (result);
}

