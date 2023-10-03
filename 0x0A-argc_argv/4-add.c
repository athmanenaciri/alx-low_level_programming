#include "main.h"

/**
 * _isdigit - checks if a character is a digit (0-9)
 * @c: the character to check
 *
 * Return: 1 if `c` is a digit, 0 otherwise
 */
int _isdigit(int c)
{
    if (c >= '0' && c <= '9')
        return (1);
    return (0);
}

/**
 * _atoi - converts a string to an integer
 * @s: the input string
 * @flag: a pointer to an integer to set to 1 if an error occurs
 *
 * Return: the converted integer if successful, 0 on error
 */
int _atoi(char *s, int *flag)
{
    int result = 0;
    int sign = 1;
    int j = 0;

    while (s[j] == ' ')
        j++;

    while (s[j] != '\0')
    {
        if (_isdigit(s[j]) == 0)
        {
            *flag = 1;
            return (0);
        }
        j++;
    }

    j = 0;

    while (s[j] == ' ')
        j++;

    while (s[j] == '-' || s[j] == '+')
    {
        if (s[j] == '-')
            sign *= -1;
        j++;
    }

    while (s[j] >= '0' && s[j] <= '9')
    {
        result = result * 10 + (s[j] - '0');
        j++;
    }

    return (result * sign);
}

/**
 * main - entry point of the program
 * @ac: the number of arguments
 * @av: an array of argument strings
 *
 * Return: 0 on success, 1 on error
 */
int main(int ac, char **av)
{
    int i = 0;
    int j = 1;
    int flag = 0;

    if (ac == 1)
    {
        write(1, "0\n", 2);
        return (0);
    }
    else
    {
        while (j < ac)
        {
            if (flag == 1)
            {
                write(1, "Error\n", 6);
                return (1);
            }
            i += _atoi(av[j], &flag);
            j++;
        }
    }

    printf("%d\n", i);
    return (0);
}

