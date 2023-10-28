#include "main.h"

/**
 * get_endianness - Checks the endianness of the machine.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	unsigned int num;
	char *endian;

	num = 1;
	endian = (char *)&num;
	if (*endian)
		return (1);
	else
		return (0);
}
