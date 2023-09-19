#include "main.h"

/**
 * puts_half - Prints the second half of a string followed by a new line.
 * @str: A pointer to a string.
 *
 * Description: This function calculates the starting index based on whether
 * the length of the string is even or odd. If it's even, it starts printing
 * from the middle; if it's odd, it starts printing from the middle character.
 * The characters are printed until the end of the string, followed by a newline.
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