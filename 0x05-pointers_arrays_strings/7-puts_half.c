#include "main.h"

/**
 * puts2 - Prints every other character of a string followed by a new line.
 * @str: A pointer to a string.
 */
void puts_half(char *str)
{
    int i;
    int lenght;

    lenght = strlen(str);
    if (lenght % 2 != 0)
        return (printf((lenght - 1) / 2));
    i = 0;
    while (i < lenght)
    {
        if (i >= lenght / 2)
            _putchar(str[i]);
        i++;
    }
}