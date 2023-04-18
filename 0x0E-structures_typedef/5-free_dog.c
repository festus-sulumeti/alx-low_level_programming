#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees dogs
 * @d: pointer to dog to free
 * Return: void
 */
void free_dog(dog_t *d)
{

	if (d)
	{
		if (d->name)   /*Check if pointer dog's name != null*/
		{
			free(d->name);  /*Free memory alloc 4 dog's name*/
		}
		if (d->owner)
		{
			free(d->owner);
		}
		free(d);
	}
}
