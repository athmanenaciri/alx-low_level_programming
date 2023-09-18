#include "main.h"
/**
 * rev_string - Reverses a string.
 * @s: A pointer to a string.
 *
 * Description: This function takes a string pointer and reverses the order of
 * characters in the string.
 */

void rev_string(char *s)
{
	int i;
	int j;
	char tmp;

	j = strlen(s) -1;
	i = 0;
	while(i < j)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		i++;
		j--;
	}
}
