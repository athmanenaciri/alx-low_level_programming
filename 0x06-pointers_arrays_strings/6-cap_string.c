#include "main.h"

int	separator(char c)
{
	char *sep;
	int i;

	i = 0;
	sep = " \t\n,;.!?\"(){}";
	while (sep[i])
	{
		if (c == sep[i])
			return (1);
		i++;
	}
	return (0);
}

char *cap_string(char *str)
{
	int flag;
	int i;

	flag = 1;
	i = 0;
	while (str[i])
	{
		if (separator(str[i]))
			flag = 1;
		else if (flag)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
			flag = 0;
		}
		i++;
	}
	return (str);
}
