#include "main.h"

/**
 * print the name of the program usign argv
 * we hope that we can use <stdio.h> library
 */

int main(int ac, char **av)
{
	printf("%d\n", ac - 1);
	*av = *av;
	return(0);
}
