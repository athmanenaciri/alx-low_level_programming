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
    while (*s == ' ' || (*s >= 9 && *s <= 13))
        s++;
    if (*s == '-')
    {
        sign = -1;
        s++;
    }
    else if (*s == '+')
		s++;
    while (*s >= '0' && *s <= '9')
    {
        result = result * 10 + (*s - '0');
        s++;
    }
    return (result * sign);
}
