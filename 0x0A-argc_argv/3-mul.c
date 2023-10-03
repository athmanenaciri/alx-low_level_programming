#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: A pointer to the string to be converted.
 *
 * Return: The integer value of the string.
 */

int _atoi(char *s)
{
    int result;
    int sign;

	result = 0;
	sign = 1;
    while (*s == ' ' || (*s >= 9 && *s <= 13)
		|| *s == '-' || *s == '+')
	{
		if (*s == '-')
        	sign = -1;
        s++;
	}
    while (*s >= '0' && *s <= '9')
    {
        result = result * 10 + (*s - '0');
        s++;
    }
    return (result * sign);
}

/*
 * this program takes the two first arguments
 * that should present two numbers , it return
 * the multiplication of them followed by a new
 * line
 */

int main(int ac, char **av)
{
	int i;

	if (ac != 3)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	else 
		i = _atoi(av[1]) * _atoi(av[2]);

	printf("%d\n", i);
	return (0);
}
