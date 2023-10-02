#include "main.h"

 /* This source file defines the _puts_recursion function, which takes a pointer
 * to a character (string) as an argument and recursively prints the string's
 * characters using the write system call. It uses a while loop to iterate
 * through the string and write each character to the standard output.
 */
void _puts_recursion(char *s)
{
	int	i;

	i = 0;
	while(s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
}
