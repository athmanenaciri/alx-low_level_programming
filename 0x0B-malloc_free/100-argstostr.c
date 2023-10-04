#include "main.h"

/**
 * argstostr - Concatenates all program arguments with newlines.
 * @ac: The argument count.
 * @av: An array of program arguments.
 *
 * Return: A pointer to a new string, or NULL if it fails.
 */
char	*argstostr(int ac, char **av)
{
	char *concatenated;
	int total_length;
	int i;
	int j;
	int index;

	if (ac == 0 || av == NULL)
		return (NULL);

   	total_length = 0;
	index = 0;
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			total_length++;
			j++;
		}
		i++;
	}
	total_length += ac;
	concatenated = malloc(sizeof(char) * (total_length + 1));
	if (concatenated == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			concatenated[index++] = av[i][j];
			j++;
		}
		concatenated[index++] = '\n';
		i++;
	}
	concatenated[index] = '\0';
	return (concatenated);
}

