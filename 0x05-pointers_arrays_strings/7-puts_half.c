#include "main.h"

/**
 * puts2 - Prints every other character of a string followed by a new line.
 * @str: A pointer to a string.
 */
void puts_half(char *str)
{
    int i;
    int length;
    int n;

    length = strlen(str);
    if (length % 2 != 0)
    {
        n = (length - 1) / 2;
        while(str[n] != '\0')
            n += n;
        _putchar(str[n]);
    }
    while (i < length / 2)
        i++;
    while (str[i] != '\0')
    {
        _putchar(str[i]);
        i++;
    }
    _putchar('\n');
}
