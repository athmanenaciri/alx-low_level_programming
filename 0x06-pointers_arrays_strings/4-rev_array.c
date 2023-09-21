#include "main.h"

/* 
   This function reverses the elements of an integer array in place.
   It takes an integer array 'a' and its length 'n' as arguments.
   The function swaps elements from the beginning and end of the array
   towards the middle until they are all reversed.
*/

void reverse_array(int *a, int n)
{
    int i;
    int tmp;
    
    i = 0;
    tmp = 0;
    n--;
    while (i < n)
    {
        tmp = a[i];
        a[i] = a[n];
        a[n] = tmp;
        i++;
        n--;
    }
}
