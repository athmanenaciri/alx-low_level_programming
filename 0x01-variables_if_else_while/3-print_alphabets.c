#include <stdio.h>

int main(void)
{
        int i;
        char c;

        i = 0;
        c = 97;
        while (i < 26)
        {
                putchar(c);
                c++;
                i++;
        }
	i = 0;
	c = 65;
        while (i < 26)
        {
                putchar(c);
                c++;
                i++;
        }
        putchar('\n');
        return (0);
}
