#include <unistd.h>

/**
 * _putchar - Writes a character to stdout
 * &c: The character to write
 *
 */
void _putchar(char c)
{
	write(1, &c, 1);
}

