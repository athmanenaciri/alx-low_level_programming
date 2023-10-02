#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse recursively.
 * @s: The string to be printed in reverse.
 */
void _print_rev_recursion(char *s)
{
    if (*s == '\0') /* Base case: End of string */
        return;

    _print_rev_recursion(s + 1); /* Recursive call to print the rest of the string in reverse */

    _putchar(*s); /* Print the current character */
}
