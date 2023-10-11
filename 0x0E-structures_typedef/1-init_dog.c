#include "dog.h"

/**
 * init_dog - Initialize a dog structure
 * @d: Pointer to the dog structure to be initialized
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Description: This function initializes a dog structure with the provided
 * name, age, and owner. It assigns these values to the corresponding fields
 * in the dog structure pointed to by 'd'.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
