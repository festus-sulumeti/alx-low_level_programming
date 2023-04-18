#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creating a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int name_length, owner_length, i;
	dog_t *dog_in;

	if (name == NULL || owner == NULL)
		return (NULL);

	dog_in = malloc(sizeof(dog_t));
	if (dog_in == NULL)
		return (NULL);

	name_length = 0;
	while (name[name_length] != '\0')
		name_length++;

	dog_in->name = malloc((name_length + 1) * sizeof(char));
	if (dog_in->name == NULL)
	{
		free(dog_in);
		return (NULL);
	}
	for (i = 0; i <= name_length; i++)
		dog_in->name[i] = name[i];

	dog_in->age = age;

	owner_length = 0;
	while (owner[owner_length] != '\0')
		owner_length++;

	dog_in->owner = malloc((owner_length + 1) * sizeof(char));
	if (dog_in->owner == NULL)
	{
		free(dog_in->name);
		free(dog_in);
		return (NULL);
	}
	for (i = 0; i <= owner_length; i++)
		dog_in->owner[i] = owner[i];

	return (dog_in);
}
