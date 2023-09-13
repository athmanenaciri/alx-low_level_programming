#incldue "main.h"

int main(void)
{
	int i;
	int sum;

	i = 0;
	sum = 1;
	j = 0;
	while (i < 50)
	{
		printf("%d", sum +j);
		if (i != 49)
			printf(", ")
		j = sum;
		i++;
	}
	printf("\n");
	return (0);
		
}
