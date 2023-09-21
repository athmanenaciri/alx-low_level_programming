#include "main.h"

/*This is a C function that compares two 
 *	strings and returns the difference between
 *	their first differing characters.
 - If the strings are equal, it returns 0.
 Parameters:
   - s1: The first string to compare
   - s2: The second string to compare
 Returns:
   - An integer representing the difference
	between the first differing characters
   */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;

	}
	return (0);
}
