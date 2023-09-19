#include "main.h"

/**
 * puts2 - Prints every other character of a string followed by a new line.
 * @str: A pointer to a string.
 */
void puts_half(char *str)
{
    int i;
    int length;

    length = strlen(str);
    if (length % 2 != 0)
        i = (length - 1) / 2;
    else
        i = length / 2;
    while (str[i] != '\0')
    {
        _putchar(str[i]);
        i++;
    }
    _putchar('\n');
}
