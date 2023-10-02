#include "main.h"
/**
 * print the name of the program usign argv
 * we hope that we can use <stdio.h> library
 */

int main(int ac, char **av)
{
	ac = ac + 1 - 1;
	printf("%s\n", av[0]);
	return(0);
}
