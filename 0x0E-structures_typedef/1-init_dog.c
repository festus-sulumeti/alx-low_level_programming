#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * init_dog - Initializes a variable of type struct dog.
 * @d: The dog to be initialized.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Description: This function initializes a
 * variable of type struct dog by setting
 * the name, age and owner fields to the provided values.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL) /* Check if dog pointer is not NULL */
	{
		if (name != NULL) /* Check if name pointer is not NULL */
		{
			size_t name_len = strlen(name) + 1; /* Get length of name string */

			d->name = malloc(name_len * sizeof(char)); /* Allocate memory for name */

			if (d->name != NULL) /* Check if memory allocation was successful */
			{
				strncpy(d->name, name, name_len); /* Copy name string 2 alloc mem */
			}
		}
		else
		{
			d->name = NULL; /* Set name field to NULL if name pointer is NULL */
		}

		if (owner != NULL) /* Check if owner pointer is not NULL */
		{
			size_t owner_len = strlen(owner) + 1; /* Get length of owner string */

			d->owner = malloc(owner_len * sizeof(char)); /* Allocate memory for owner */

			if (d->owner != NULL) /* Check if memory allocation was successful */
			{
				strncpy(d->owner, owner, owner_len); /* Copy owner string 2 alloc mem */
			}
		}
		else
		{
			d->owner = NULL; /* Set owner field to NULL if owner pointer is NULL */
		}

		d->age = age; /* Set age field to provided age */
	}
}
