#include "main.h"

/**
 * _strstr - Locates a substring.
 * @haystack: The string to search within.
 * @needle: The substring to locate.
 *
 * Return: A pointer to the beginning of the located substring,
 *         or NULL if the substring is not found.
 */

char	*_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	
	i = 0;
	while (haystack[i])
	{
		j = 0;
		while (needle[j])
		{
			if (haystack[i + j] != needle[j])
				break;
			j++;
		}
		if (!needle[j])
		return (haystack + i);
		i++;
	}
	return (NULL);
}
