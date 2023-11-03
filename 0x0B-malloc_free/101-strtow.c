#include "main.h"

/**
 * _strncpy - Copy a string up to n bytes from src to dest
 * @dest: Destination string
 * @src: Source string
 * @n: Number of bytes to copy
 *
 * Return: Pointer to the destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: A pointer to an array of strings (words), or (NULL) on failure.
 */
char	**strtow(char *str)
{
	char **words;
	int wc;
	int i;
	int j;
	int k;

	if (str == NULL || *str == '\0')
		return (NULL);
	wc = 0;
	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		if (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
		{
			wc++;
			while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
				i++;
		}
	}
	if (wc == 0)
		return (NULL);
	words = malloc(sizeof(char *) * (wc + 1));
	if (words == NULL)
		return (NULL);
	i = 0;
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		if (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
		{
			k = 0;
			while (str[i + k] && (str[i + k] != ' '
						&& str[i + k] != '\t' && str[i + k] != '\n'))
				k++;
			words[j] = malloc(k + 1);
			if (words[j] == NULL)
			{
				while (j >= 0)
					free(words[j--]);
				free(words);
				return (NULL);
			}
			_strncpy(words[j], str + i, k);
			words[j][k] = '\0';
			i += k;
			j++;
		}
	}
	words[j] = NULL;
	return (words);
}

