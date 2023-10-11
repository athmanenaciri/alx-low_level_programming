#include "dog.h"

/*
 * _putstr function uses write 
 *	system call to write the string
 *	char by char at the stdout 
 */
void	_putstr(char	*str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

/*
 * print_dog - Print the attributes of a dog structure
 * @d: Pointer to the dog structure to be printed
 *
 * Description: This function prints the attributes of a dog structure,
 * including its name, age, and owner. If any of these attributes is NULL,
 * it prints "(nil)" as a placeholder. The function handles the case where
 * 'd' is NULL, in which case it does nothing.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (!d->name)
		printf("Name: (nil)\n");
	else 
		printf("Name: %s\n", d->name);
	if (!d->age)
		printf("Age: (nil)\n");
	else 
		printf("Age: %f\n", d->age);
	if (!d->owner)
		printf("Owner: (nil)");
	else 
		printf("Owner: %s", d->owner);
}
