#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: The input string to be encoded.
 *
 * Return: A pointer to the modified string.
 */

char *leet(char *str)
{
	char *s1;
	char *s2;
	int i;
	int j;

	s1 = "aAeEoOtTlL";
	s2 = "430771";
	i = 0;
	while (str[i])
	{
		j = 0;
		while (s1[j])
		{
			if (str[i] == s1[j])
			{
				str[i] = s2[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (str);
}
