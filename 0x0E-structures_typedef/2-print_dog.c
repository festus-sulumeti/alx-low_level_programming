#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints the contents of a dog struct
 * @d: pointer to struct dog
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("Invalid dog struct pointer\n");
		return;
	}

	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("Age: %f\n", (d->age >= 0) ? d->age : -1.0);
	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
