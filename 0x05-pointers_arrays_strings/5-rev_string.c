#include "main.h"

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
