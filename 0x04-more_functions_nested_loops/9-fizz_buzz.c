#include "main.h"

int main(void)
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 5 == 0)
		{
			printf("Buzz");
			if (i != 100)
				printf(" ");
		}
		else if (i % 3 == 0)
			printf("Fizz ");
		else
			printf("%d ", i);
		i++;
	}
	return (0);
}
