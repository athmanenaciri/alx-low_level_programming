#include "dog.h"
#include <stdio.h>

/**
 * _putstr - Custom function to print a string
 * @str: The string to be printed
 */
void _putstr(char *str)
{
    if (str)
    {
        while (*str)
        {
            putchar(*str);
            str++;
        }
    }
    else
    {
        printf("(nil)");
    }
}

/**
 * print_dog - Print the attributes of a dog structure
 * @d: Pointer to the dog structure to be printed
 */
void print_dog(struct dog *d)
{
    if (d == NULL)
        return;

    printf("Name: ");
    _putstr(d->name);

    printf("\nAge: ");
    if (d->age < 0)
        printf("(nil)");
    else
        printf("%f", d->age);

    printf("\nOwner: ");
    _putstr(d->owner);
    
    printf("\n");
}

