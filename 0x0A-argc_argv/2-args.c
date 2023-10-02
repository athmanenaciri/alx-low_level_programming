#include "main.h"

/*
 * this program print's all the arguments
 * including the executable.
 * using two loops, to loop around the arguments
 * and the second one to loop throught charachters .
 */

int main(int ac, char **av)
{
	int i;
	int j;

	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			write(1, &av[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
