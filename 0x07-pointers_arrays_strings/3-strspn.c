#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to search.
 * @accept: The string containing the characters to match.
 *
 * Return: The number of bytes in the initial segment of 's'
 *         which consist only of bytes from 'accept'.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int c;
	int i;
	int j;
	int same;

	c = 0;
	i = 0;
	while (s[i])
	{
		same = 0;
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				c++;
				same = 1;
				break;
			}
			j++;
		}
		if (same == 0)
			return (c);
		i++;
	}
	return (c);
}

