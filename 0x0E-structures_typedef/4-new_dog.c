#include "dog.h"

/**
 * new_dog - Create a new dog structure.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 *
 * Return: Pointer to the newly created dog structure (or NULL if allocation fails).
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t	*new_dog;
	char	*name_copy;
	char	*owner_copy;

	if (!name || !owner || age < 0)
		return (NULL);
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	name_copy = strdup(name);
	owner_copy = strdup(owner);
	if (name_copy == NULL || owner_copy == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->name = name_copy;
	new_dog->age = age;
	new_dog->owner = owner_copy;
	return (new_dog);
}

