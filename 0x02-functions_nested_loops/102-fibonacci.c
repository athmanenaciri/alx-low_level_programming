#include "main.h"

int main(void)
{
	int i;
	int sum;
	int j;
	int tmp;

	i = 0;
	sum = 1;
	j = 2;
	printf("%d, %d, ", sum, j);
	while (i < 48)
	{
		printf("%d", sum +j);
		if (i != 49)
			printf(", ");
		tmp = sum;
		sum = j;
		j = tmp + j;

		i++;
	}
	printf("\n");
	return (0);
		
}
