#include "main.h"

char *rot13(char *str)
{
        char *s1;
        char *s2;
        int i;
        int j;

        s1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
        s2 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
        i = 0;
        while (str[i])
        {
                j = 0;
                while (s1[j])
                {
                        if (str[i] == s1[j])
                        {
                                str[i] = s2[j];
                                break;
                        }
                        j++;
                }
                i++;
        }
        return (str);
}
