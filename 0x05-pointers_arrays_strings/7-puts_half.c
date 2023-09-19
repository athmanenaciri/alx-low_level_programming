#include "main.h"

/**
 * puts2 - Prints every other character of a string followed by a new line.
 * @str: A pointer to a string.
 */
void puts_half(char *str)
{
    int length;
    int start;

    length = strlen(str);
    if (length % 2 == 0)
        start = length / 2;
    else
        start = (length + 1) / 2;
    while (str[start] != '\0')
    {
        _putchar(str[start]);
        start++;
    }
    _putchar('\n');
}