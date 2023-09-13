#include "main.h"

void times_table(void)
{
	int i;
	int j;
	int counter;

	i = 0;
	j = 0;
	counter = 0;
	while (i < 10)
	{
		printf("0");
		j = 1;
		while (j <= 9)
		{
			printf(",");
			if (j * counter  < 10)
				printf(" ");
			printf(" %d", j * counter);
			j++;
		}
		printf("\n");
		counter++;
		i++;
	}
}
