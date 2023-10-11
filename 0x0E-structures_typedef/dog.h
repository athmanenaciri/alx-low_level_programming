#ifndef DOG_H
#define DOG_H
#include <unistd.h>

/**
 * struct dog - Structure to represent a dog
 * @name: The name of the dog
 * @owner: The owner of the dog
 * @age: The age of the dog
 *
 * Description: This structure defines the attributes of a dog, including
 * its name, owner, and age. It is used to create and manipulate dog objects.
 */
typedef struct dog
{
	char	*name;
	char	*owner;
	float	age;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
