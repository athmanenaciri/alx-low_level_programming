#include "main.h"

/**
 * _islower - Checks if a character is lowercase
 * @c: The character to be checked
 *
 * Description: This function checks whether the given character 'c'
 * is a lowercase letter.
 *
 * Return: 1 if 'c' is lowercase, 0 otherwise.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
