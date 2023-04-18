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
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);


	for (name_length = 0; name[name_length] != '\0'; name_length++)
		;
	dog->name = malloc((name_length + 1) * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i <= name_length; i++)
		dog->name[i] = name[i];

	dog->age = age;


	for (owner_length = 0; owner[owner_length] != '\0'; owner_length++)
		;
	dog->owner = malloc((owner_length + 1) * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i <= owner_length; i++)
		dog->owner[i] = owner[i];

	return (dog);
}
