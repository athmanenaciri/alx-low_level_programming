#include "main.h"

/**
 * string_nconcat - Concatenates two strings up to n bytes.
 * @s1: The first string
 * @s2: The second string
 * @n: The maximum number of bytes from s2 to concatenate
 *
 * Return: A pointer to the newly allocated concatenated string,
 *         or NULL if allocation fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *con;
	unsigned int s1len;
	unsigned int s2len;
	unsigned int i;
	unsigned int j;
	
	s1len = 0;
	s2len = 0;
	i = 0;
	j = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[s1len] != '\0')
		s1len++;
	while (s2[s2len] != '\0')
		s2len++;
	if (n >= s2len)
		n = s2len;
	con = malloc(sizeof(char) * (s1len + n + 1));
	if (con == NULL)
		return (NULL);
	while (*s1)
	{
		con[i] = *s1;
		s1++;
		i++;
	}
	while (*s2 && j < n)
	{
		con[i] = *s2;
		s2++;
		i++;
		j++;
	}
	con[i] = '\0';
	return (con);
}
