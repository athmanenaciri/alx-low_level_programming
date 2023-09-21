#include "main.h"

/**
 * separator - Checks if a character is a separator.
 * @c: The character to check.
 *
 * Return: 1 if it's a separator, 0 otherwise.
 */

int	separator(char c)
{
	char *sep;
	int i;

	i = 0;
	sep = " \t\n,;.!?\"(){}";
	while (sep[i])
	{
		if (c == sep[i])
			return (1);
		i++;
	}
	return (0);
}

/**
 * cap_string - Capitalizes the first letter of each word in a string.
 * @str: The input string.
 *
 * Return: A pointer to the modified string.
 */

char *cap_string(char *str)
{
	int flag;
	int i;

	flag = 1;
	i = 0;
	while (str[i])
	{
		if (separator(str[i]))
			flag = 1;
		else if (flag)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
			flag = 0;
		}
		i++;
	}
	return (str);
}
